// I hate TLE

#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>

using namespace std;


struct item_t {
  int a;
  int b;
  int s;
  int p;
  item_t* next;
};


int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  item_t START;
  item_t items[200 * 200];
  item_t * prev = &START;

  int C = 0;
  for (int a = 1; a < N; a++) {
    for (int b = a + 1; b <= N; b++) {
      items[C].a = a;
      items[C].b = b;
      items[C].s = a + b;
      items[C].p = a * b;
      items[C].next = NULL;
      prev->next = &items[C];
      prev = &items[C];
      C++;
    }
  }

  char count[40001];
  
  for (int i = 0; i < M; i++) {
    memset(count, 0, sizeof(count));
    bool something_changed = false;
    
    if (i % 2 == 0) {                           // summ case
      for (item_t* it = &START; it->next; it = it->next) count[it->next->s]++;

      for (item_t* it = &START; it->next; ) {
        if (count[it->next->s] == 1) {
          it->next = it->next->next;
          something_changed = true;
          C--;
        } else {
          it = it->next;
        }
      }

    } else {                                    // product case
      for (item_t* it = &START; it->next; it = it->next) count[it->next->p]++;

      for (item_t* it = &START; it->next; ) {
        if (count[it->next->p] == 1) {
          it->next = it->next->next;
          something_changed = true;
          C--;
        } else {
          it = it->next;
        }
      }
    }

    if (!something_changed) break;
  }



  memset(count, 0, sizeof(count));

  if (M % 2 == 0) {                           // summ case
    for (item_t* it = &START; it->next; it = it->next) count[it->next->s]++;

    for (item_t* it = &START; it && it->next; ) {
      if (count[it->next->s] > 1) {
        it->next = it->next->next;
        C--;
      } else {
        it = it->next;
      }
    }

  } else {                                    // product case
    for (item_t* it = &START; it->next; it = it->next) count[it->next->p]++;

    for (item_t* it = &START; it && it->next; ) {
      if (count[it->next->p] > 1) {
        it->next = it->next->next;
        C--;
      } else {
        it = it->next;
      }
    }
  }


  cout << C << endl;
  for (item_t* it = &START; it->next; it = it->next) cout << it->next->a << ' ' << it->next->b << endl;

  return 0;
}
