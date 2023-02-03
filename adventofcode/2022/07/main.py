#!/usr/bin/env python3

import sys
import re

p_cd = re.compile(r'^\$ cd (.+)$')
p_dir = re.compile(r'^dir (.+)')
p_file = re.compile(r'^(\d+) (.+)')


class Dir:
    def __init__(self, name, parent):
        self.__name = name
        self.__parent = parent
        self.__files = []
        self.__children = []
        self.__size = None

    def get_name(self):
        return self.__name

    def get_parent(self):
        return self.__parent

    def get_size(self):
        if self.__size is None:
            self.__size = sum([file[1] for file in self.__files])
            for child in self.__children:
                self.__size += child.get_size();
        return self.__size

    def mkdir(self, name):
        dir = next((dir for dir in self.__children if dir.get_name() == name), None)
        if dir is None:
            dir = Dir(name, self)
            self.__children.append(dir)
        return dir

    def mkfile(self, name, size):
        self.__files.append((name, size))

    def get_children(self):
        return self.__children

    def get_child(self, name):
        dir = next(dir for dir in self.__children if dir.get_name() == name)
        return dir

    def iterate(self, predicate):
        predicate(self)
        for child in self.__children:
            child.iterate(predicate)


root = Dir('/', None)
current = root

for line in sys.stdin:
    line = line.strip()

    if (m := p_cd.match(line)):
        rule = m[1]
        if rule == "/":
            current = root
        elif rule == "..":
            current = current.get_parent()
        else:
            current = current.get_child(rule)

    elif (line == "$ ls"):
        pass

    elif (m := p_dir.match(line)):
        current.mkdir(m[1])

    elif (m := p_file.match(line)):
        current.mkfile(m[2], int(m[1]))


all_dirs = []
root.iterate(lambda dir: all_dirs.append(dir))

dirs_100000 = [dir for dir in all_dirs if dir.get_size() <= 100000 and dir is not root]
print (sum([dir.get_size() for dir in dirs_100000]))

totl_space = 70000000
need_space = 30000000
used_space = root.get_size()
unused_space = totl_space - used_space
need_to_delete = need_space - unused_space
best_dir_to_delete = root
for dir in all_dirs:
    if dir.get_size() >= need_to_delete:
        if dir.get_size() < best_dir_to_delete.get_size():
            best_dir_to_delete = dir

print (best_dir_to_delete.get_size())

