#include <iostream>
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>


std::vector< std::vector<bool> > f;
int n;
int left, top, size;
int steps;

void print(const std::vector< std::vector<bool> > & f) {
  return;
  for(int i = 0; i < f.size(); i++) {
    for(int j = 0; j < f[i].size(); j++) {
      std::cout << (f[i][j] ? '*' : '_');
    }
    std::cout << std::endl;
  }
}

int get_cell_value(int y, int x) {
  return y * n + x + 1;
}

void remove_cells(int n, int y, int x, int dy, int dx, int sy, int sx) {
  std::vector<int> removed;
  for(int i = 0; i < n; i++) {
    f[y + sy + i * dy][x] = false;
    f[y][x + sx + i * dx] = false;
    removed.push_back(get_cell_value(y + sy + i*dy, x));
    removed.push_back(get_cell_value(y, x + sx + i*dx));
  }
  sort(removed.begin(), removed.end());
  std::cout << steps << " ";
  int num = removed.size();
  for(int i = 0; i < num; i++) {
    if(i == 0 || removed[i-1] != removed[i]) {
      std::cout << removed[i];
      if(i != num-1)  std::cout << " ";
    }
  }
  std::cout << "\n";
  print(f);
}

void remove_tr(bool s) {
  remove_cells(size/2,
               top, left+size-1,
               2, -2,
               s ? 1 : 0, s ? -1 : 0);
}
void remove_tl(bool s) {
  remove_cells(size/2,
               top, left,
               2,  2,
               s ? 1 : 0, s ? 1 : 0);
}

void remove_br(bool s) {
  remove_cells(size/2,
               top + size - 1, left + size - 1,
               -2,  -2,
               s ? -1 : 0, s ? -1 : 0);
}
void remove_bl(bool s) {
  remove_cells(size/2,
               top + size - 1, left,
               -2,  2,
               s ? -1 : 0, s ? 1 : 0);
}

void remove_o(bool s) {
  std::vector<int> removed;
  for(int i = 0; i < size-1; i += 2) {
    f[top                             ][left + i + (s ? 1 : 0)           ] = false;
    f[top + i + (s ? 1 : 0)           ][left + size - 1                  ] = false;
    f[top + size - 1                  ][left + size - 1 - i - (s ? 1 : 0)] = false;
    f[top + size - 1 - i - (s ? 1 : 0)][left                             ] = false;

    removed.push_back(get_cell_value(top                             ,left + i + (s ? 1 : 0)           ));
    removed.push_back(get_cell_value(top + i + (s ? 1 : 0)           ,left + size - 1                  ));
    removed.push_back(get_cell_value(top + size - 1                  ,left + size - 1 - i - (s ? 1 : 0)));
    removed.push_back(get_cell_value(top + size - 1 - i - (s ? 1 : 0),left                             ));
  }
  sort(removed.begin(), removed.end());
  std::cout << steps << " ";
  for(int i = 0; i < removed.size(); i++) std::cout << removed[i] << " ";
  std::cout << "\n";
  print(f);
}




int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  std::cin >> n;
  f = std::vector< std::vector<bool> >(n, std::vector<bool>(n, true));

  int u = n * n;
  steps = n;
  int oddness = 1;
  left = 0;
  top = 0;
  size = n;

  // first move: remove
  /*for(int i = n + 3; i <= 2 * n; i++) {
    for(int k = n; i - k <= n; k--) {
      f[k][i-k] = false;
      ns[k-1][i-k  ] --;
      ns[k  ][i-k-1] --;
      ns[k  ][i-k+1] --;
      ns[k+1][i-k  ] --;
      u--;
    }
  }*/

  //print(f);
  //print(ns);


  do {
    int left_top_oddness = (left + top + 1) % 2;

    if(size % 2 == 0) {
      if(left_top_oddness == oddness) {
        if(steps % 2 == 0) {
          remove_tr(false);
          steps++;
          remove_tr(true);
          steps++;
          top ++;
          size --;
          oddness = 1-oddness;
        } else {
          remove_tl(false);
          steps++;
          steps++;
          remove_tl(true);
          steps++;
          top ++;
          left++;
          size--;
        }
      } else {
        if(steps % 2 == 0) {
          remove_br(false);
          steps++;
          remove_br(true);
          steps++;
          size--;
          oddness = 1 - oddness;
        } else {
          remove_tr(false);
          steps++;
          steps++;
          remove_tr(true);
          steps++;
          top++;
          size--;
        }
      }
    } else {
      if(left_top_oddness == oddness) {
        if(steps%2 == 0) {
          steps++;
        } else {
          remove_o(false);
          steps++;
          steps++;
          remove_o(true);
          steps++;
          size -= 2;
          left++;
          top++;
        }
      } else {
        if(steps%2 == 0){
          remove_o(false);
          steps++;
          remove_o(true);
          steps++;
          size -= 2;
          left++;
          top++;

        } else {
          steps++;
        }
      }
    }

    //std::cout << "Step " << steps << ":" << std::endl;
    //print(f);

  } while(size > 1);


  return 0;
}
