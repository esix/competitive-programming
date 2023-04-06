#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int get_words(char* s, vector<int>& out, vector<pair<int, int> >* words_bounds) {
  int state = 0, start_of_word = 0, words_count = 0, i = 0;

  do {
    char c = s[i];
    if ('A' <= c && c <= 'Z') c = s[i] = c - 'A' + 'a';

    bool isW = ('a' <= c && c <= 'z');
    if (state == 0) {
      if (isW) {                    // word has started
        start_of_word = i;
        state = 1;
      }
    } else if (state == 1) {
      if (!isW) {                   // word has ended
        out.push_back(i - start_of_word);
        state = 0;
        words_count++;
        if (words_bounds) {
          words_bounds->push_back(make_pair<int, int>(start_of_word, i - start_of_word));
        }
      }
    }
  } while(s[i++]);

  return words_count;
}


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  getline(cin, s);
  int T = atoi(s.c_str());

  for (int t = 1; t <= T; t++) {
    char l1[100001], l2[100001], l3[100001];
    cin.getline(l1, 100001);
    cin.getline(l2, 100001);
    cin.getline(l3, 100001);

    vector<int> ws;
    vector<pair<int, int> > words_bounds;

    int c1 = get_words(l1, ws, NULL);
    int c2 = get_words(l2, ws, NULL);
    int c3 = get_words(l3, ws, &words_bounds);

    int N = ws.size();
    for (int i = 0; i < N; i++) ws[i] = ws[i] + i;

    for (int i = c1 + c2 - 1; i >= 0; i--) {
      if (ws[i] >= c1 + c2) {
        // will check later
      } else {
        ws[i] = ws[ws[i]];
      }
    }

    set<int> indices3;
    bool outside = false;
    for (int i = 0; i < c1; i++) {
      if (ws[i] >= N) {
        outside = true;
      } else {
        indices3.insert(ws[i]);
      }
    }

    cout << "Scenario #" << t << ":\n";
    if (outside) cout << "-outside-\n";
    if (indices3.size() > 3) {
      cout << "-too many-\n";
    } else {
      vector<string> words;

      for (set<int>::iterator it = indices3.begin(); it != indices3.end(); ++it) {
        int idx = *it;
        pair<int, int> bounds = words_bounds[idx - c1 - c2];
        words.push_back(string(l3 + bounds.first, bounds.second));
      }

      sort(words.begin(), words.end());

      for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
      }
    }

    cout << endl;
  }

  return 0;
}
