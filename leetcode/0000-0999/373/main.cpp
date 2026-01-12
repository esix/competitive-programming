// g++ -std=c++11 main.cpp

#include <utility>
#include <vector>
#include <iostream>

using namespace std;


#include <queue>

class Solution {
public:
    vector<pair<int, int> > kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
      typedef pair<int, int> pos_t;

      vector<pos_t> res;
      if (nums1.size() == 0 || nums2.size() == 0 || k == 0) {
        return res;
      }

      auto cmp = [&nums1, &nums2](pos_t pos1, pos_t pos2) {
        int v1 = nums1[pos1.first] + nums2[pos1.second];
        int v2 = nums1[pos2.first] + nums2[pos2.second];
        return v1 > v2;
      };

      priority_queue<pos_t, vector<pos_t>, decltype(cmp)> q(cmp);
      q.push(make_pair(0, 0));

      while (k > 0 && q.size() > 0) {
        k--;
        pos_t pos = q.top();
        q.pop();

        res.push_back(make_pair(nums1[pos.first], nums2[pos.second]));   //to result

        if (pos.first < nums1.size() - 1) {            // can move right (next nums1)
          q.push(make_pair(pos.first + 1, pos.second));
        }
        if (pos.first == 0 && pos.second < nums2.size() - 1) {   // can move down (next nums2)
          q.push(make_pair(pos.first, pos.second + 1));
        }
      }

      return res;
    }
};



int main() {
  const int arr1[] = {1,1,2};
  const int arr2[] = {1,2,3};
  int k = 2;

  vector<int> nums1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
  vector<int> nums2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));

  Solution solution;
  vector<pair<int, int> > res = solution.kSmallestPairs(nums1, nums2, k);

  for (int i = 0; i < res.size(); i++) {
    cout << "[" << res[i].first << "," << res[i].second << "]" << endl;
  }

  return 0;
}
