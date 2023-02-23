#!/usr/bin/env python3
import sys
import re
import time

p_monkey = re.compile(r"^Monkey (\d+):")
p_starting_items = re.compile(r"^  Starting items: (\d+(, \d+)*)$")
p_operation = re.compile(r"^  Operation: new = old ([\+\-\*]) (\d+|old)")
p_test_divisible_by = re.compile(r"^  Test: divisible by (\d+)")
p_if_true = re.compile(r"^    If true: throw to monkey (\d+)")
p_if_false = re.compile(r"^    If false: throw to monkey (\d+)")

OP_MUL = 0
OP_ADD = 1
OP_SUB = 2

monkeys = []

class Item:
    def __init__(self, v, divisors):
        self.vs = {}
        for divisor in divisors:
          self.vs[divisor] = v % divisor

    def mul(self, op):
        for divisor in self.vs.keys():
            self.vs[divisor] = (self.vs[divisor] * op) % divisor

    def add(self, op):
        for divisor in self.vs.keys():
            self.vs[divisor] = (self.vs[divisor] + op) % divisor

    def sqr(self):
        for divisor in self.vs.keys():
            self.vs[divisor] = (self.vs[divisor] ** 2) % divisor

    def is_divisible(self, divisor):
        return self.vs[divisor] == 0
            

class Monkey:
    def __init__(self, id, monkeys):
        self.id = id
        self.monkeys = monkeys
        self.total_inspected = 0
        self.items = []
        self.operator = OP_MUL
        self.operand = 0
        self.test_divisible_by = 0
        self.if_true = 0
        self.if_false = 0

    def add_item(self, item):
        self.items.append(item)

    def run_operation(self, item):
        op2 = item if self.operand == 0 else self.operand
        if self.operator == OP_ADD:
            if self.operand == 0:
                item.mul(2)
            else:
                item.add(self.operand)
        elif self.operator == OP_MUL:
            if self.operand == 0:
                item.sqr()
            else:
                item.mul(self.operand)
        else:
            raise 

    def _run_inspect(self, item):
        # print('  Monkey inspects an item with a worry level of ', item)
        self.run_operation(item)
        self.total_inspected += 1
        return item

    def _run_on_item(self, item):
        item = self._run_inspect(item)
        # print('    Worry level ', item)
        # item = item // 3
        # print('    Borried ', item)
        if item.is_divisible(self.test_divisible_by):
            # print ("    Current worry level is +")
            return (item, self.if_true)
            print ("    Item with worry level ", item, "is thrown to monkey ", self.if_true)
        else:
            # print ("    Current worry level is -")
            return (item, self.if_false)
            print ("    Item with worry level ", item, "is thrown to monkey ", self.if_false)

    def run(self):
        # print ("Monkey", self.id)
        for item in self.items:
            (item, next_monkey_id) = self._run_on_item(item)
            self.monkeys[next_monkey_id].add_item(item)
        self.items.clear()


for line in sys.stdin:
    if m := p_monkey.match(line):
        current_monkey = Monkey(int(m[1]), monkeys)
        monkeys.append(current_monkey)
    elif m := p_starting_items.match(line):
        current_monkey.items = list(map(int, m[1].split(', ')))
    elif m := p_operation.match(line):
        if m[1] == '*':
            operator = OP_MUL
        elif m[1] == "+":
            operator = OP_ADD
        elif m[1] == "-":
            operator = OP_SUB
        operand = 0 if m[2] == "old" else int(m[2])
        current_monkey.operator = operator
        current_monkey.operand = operand
    elif m := p_test_divisible_by.match(line):
        current_monkey.test_divisible_by = int(m[1])
    elif m := p_if_true.match(line):
        current_monkey.if_true = int(m[1])
    elif m := p_if_false.match(line):
        current_monkey.if_false = int(m[1])

divisors = [m.test_divisible_by for m in monkeys]

for m in monkeys:
    for i in range(len(m.items)):
        m.items[i] = Item(m.items[i], divisors)

for i in range(1, 10001):
    for m in monkeys:
        m.run()
    if i == 1 or i == 20 or (i % 1000 == 0):
      print ("After round", i)
      for m in monkeys:
          print (m.id, ':', m.total_inspected)

monkeys.sort(key=lambda x: -x.total_inspected)
print(monkeys[0].total_inspected * monkeys[1].total_inspected)

