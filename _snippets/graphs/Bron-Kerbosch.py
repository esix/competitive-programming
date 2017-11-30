# /e-olymp/page-001/0041/main.py

def BronKerbosch1(R, P, X):
    if not P and not X:
        # Found clique: R
        # ...
        
    for v in P:
        BronKerbosch1(R | {v}, P & N(v), X & N(v))
        P = P - {v}
        X = X | {v}


BronKerbosch1(set(), set(range(n)),set())