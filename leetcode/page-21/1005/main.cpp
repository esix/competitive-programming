class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        multiset<int> c(A.begin(), A.end());
        for (int i = 0; i < K; i++) {
            int v = *c.begin();
            c.erase(c.begin());
            c.insert(-v);
        }
        return std::accumulate(c.begin(), c.end(), 0);
    }
};
