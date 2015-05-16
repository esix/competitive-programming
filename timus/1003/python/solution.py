#!/usr/bin/env python


def add_edge(graph, a, b, e):
    if not graph.has_key(a): graph[a] = []
    if not graph.has_key(b): graph[b] = []
    graph[a].append((a, b, e))
    graph[b].append((b, a, e))


def select_edges_from_node(graph, n):
    if not graph.has_key(n): return set()
    return set(graph[n])

def select_adjacent_nodes(graph, n):
    es = select_edges_from_node(graph, n[0])
    return map(lambda e: (e[1], (e[2]+n[1])%2), es)


def select_adjacent_nodes_from_nodes(graph, ns):
    result = []
    for n in ns:
        result += select_adjacent_nodes(graph, n)
    return result


def find_path(graph, start, end):
    if start == end:
        return 0
    ns = [(start, 0)]
    visited = set()
    while True:
        visited.update(map(lambda n: n[0], ns))
        ns = select_adjacent_nodes_from_nodes(graph, ns)
        ns = filter(lambda n: not n[0] in visited, ns)
        if len(ns) == 0:
            return False
        mb_found = filter(lambda n: n[0] == end, ns)
        if len(mb_found):
            return mb_found[0][1]



def solve_example():
    M = int(raw_input())
    if M == -1:
        return False

    n = int(raw_input())
    ns = [raw_input() for i in xrange(0, n)]
    
    graph = dict()
    for i in xrange(0, len(ns)):
        a, b, e = ns[i].split(' ')
        a = min(M, int(a))
        b = min(M, int(b)) + 1
        e = 0 if e == 'even' else 1
        path = find_path(graph, a, b)
        if not(path is False):
            if path != e:
                print i
                return True
        add_edge(graph, a, b, e)
    print len(ns)
    return True


while solve_example():
    pass
