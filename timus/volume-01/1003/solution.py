class Set(set):
    def __init__(self, *args, **kwds):
        super(Set, self).__init__(*args, **kwds)
        self.contra = None


class Solution(object):
    def __init__(self):
        self._sets = dict()

    def _get_set(self, i):
        if i not in self._sets:
            s = Set([i])
            self._sets[i] = s
            return s
        return self._sets[i]

    def _join_sets(self, a_set, b_set):
        if a_set is None: return b_set
        if b_set is None: return a_set
        if a_set is b_set:
            return a_set

        #a_set.contra = self._join_sets(a_set.contra, b_set.contra)
        a_set.update(b_set)
        for i in b_set: self._sets[i] = a_set
        return a_set

    def add(self, a, b, weight):
        a_set = self._get_set(a)
        b_set = self._get_set(b)
        a_contraset = a_set.contra
        b_contraset = b_set.contra

        if a_set is b_set and weight == 1:
            return False
        if a_contraset is b_set and weight == 0:
            return False

        if weight == 0:
            s = self._join_sets(a_set, b_set)
            s.contra = self._join_sets(a_contraset, b_contraset)
        else:
            a_set = self._join_sets(a_set, b_set.contra)
            b_set = self._join_sets(b_set, a_set.contra)
            a_set.contra = b_set
            b_set.contra = a_set
        return True


    def __str__(self):
        return str(self._sets)


def solve_example():
    M = int(input())
    if M == -1:
        return False

    n = int(input())
    ns = [input() for i in range(n)]

    solution = Solution()

    for i in range(n):
        a, b, e = ns[i].split(' ')
        a = min(M, int(a))
        b = min(M, int(b)) + 1
        e = 0 if e == 'even' else 1

        if not solution.add(a, b, e):
            print(i)
            return True

    print(n)
    return True


while solve_example():
    pass
