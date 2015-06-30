#include <iostream>

using namespace std;



enum Color {
  Blue=0, Purple=1
};

struct Junction {
  Junction() {}
  Junction(Color p_color, int p_r, int p_tb, int p_tp) : init_color(p_color), r(p_r), tb(p_tb), tp(p_tp) {

  }

  Color getCurrentColor() {
    return getColorAt(0);
  }

  Color getColorAt(int t) {
    if(t < r) return init_color;
    t -= r;
    t %= (tb + tp);
    if(init_color == Blue) return t < tp ? Purple : Blue;
    else return t < tb ? Blue : Purple;
  }

  Junction copyAtRelativeTime(int t) {
    if(t < r)
      return Junction(init_color, r - t, tb, tp);
    t -= r;
    t %= (tb + tp);
    if(init_color == Blue) return t < tp ? Junction(Purple, tp - t, tb, tp) : Junction(Blue, tb + tp - t, tb, tp);
    else return t < tb ? Junction(Blue, tb - t, tb, tp) : Junction(Purple, tb + tp - t, tb, tp);
  }

  Color init_color;
  int r;
  int tb;
  int tp;
};

struct Road {
  Road() : src(NULL), dst(NULL), len(0) {}

  Road(Junction * p_src, Junction *p_dst, int p_len) : src(p_src), dst(p_dst), len(p_len) {
  }

  int getNextOpened(int t) {
    Junction j1 = src->copyAtRelativeTime(t);
    Junction j2 = dst->copyAtRelativeTime(t);

    if(j1.getCurrentColor() == j2.getCurrentColor()) return 0;

    if(j1.r < j2.r) {
      j1 = j1.copyAtRelativeTime(j1.r);
      j2 = j2.copyAtRelativeTime(j1.r);
    } else {
      Junction tmp = j1.copyAtRelativeTime(j2.r);
      j1 = j2.copyAtRelativeTime(j2.r);
      j2 = tmp;
    }

    return 0;
  }

  Junction *src;
  Junction *dst;
  int len;
};


int main() {
  ios::sync_with_stdio(false);

  int src, dst, N, M;
  cin >> src >> dst;
  src--; dst--;

  cin >> N >> M;
  Junction * js = new Junction [N];
  Road * rs = new Road [M];

  // junctions
  for(int i = 0; i < N; i++) {
    char c_init_color;
    Color init_color;
    int r, tb, tp;
    cin >> c_init_color >> r >> tb >> tp;
    if(c_init_color == 'B') init_color = Blue; else init_color = Purple;
    js[i] = Junction(init_color, r, tb, tp);
  }

  // roads
  for(int i = 0; i < M; i++) {
    int srcjid, dstjid, len;
    cin >> srcjid >> dstjid >> len;
    srcjid--; dstjid--;
    rs[i] = Road(js + srcjid, js + dstjid, len);
  }


  cout.width(4);
  for(int i = 0; i < 200; i++) {
    cout << i << ' ' << js[1].getColorAt(i) << ' ' << js[1].copyAtRelativeTime(i).getColorAt(0) << " -> " << js[1].copyAtRelativeTime(i).getColorAt(1)<< endl;;
  }


  return 0;
}
