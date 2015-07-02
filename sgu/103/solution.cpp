#include <iostream>
#include <set>
#include <queue>
#include <vector>

using namespace std;

#define INF 1000000


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

  int t0() const { return r; }
  int t1() const { return r + (init_color == Blue ? tp : tb); }
  int t2() const { return r + tp + tb; }

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

  Road(Junction * js, int p_src_idx, int p_dst_idx, int p_len) {
    src_idx = p_src_idx;
    dst_idx = p_dst_idx;
    src = js + src_idx;
    dst = js + dst_idx;
    len = p_len;
  }

  int getNextOpened(int t) {
    Junction j1 = src->copyAtRelativeTime(t);
    Junction j2 = dst->copyAtRelativeTime(t);

    set<int> ts;    // times to check
    ts.insert(0);
    ts.insert(j1.t0());
    ts.insert(j1.t1());
    ts.insert(j1.t2());
    ts.insert(j2.t0());
    ts.insert(j2.t1());
    ts.insert(j2.t2());

    for(set<int>::iterator it = ts.begin(); it != ts.end(); it++) {
      if(j1.getColorAt(*it) == j2.getColorAt(*it)) {
        return t + *it;
      }
    }

    return INF;
  }

  int src_idx;
  int dst_idx;
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
    rs[i] = Road(js, srcjid, dstjid, len);
  }


  int *dist = new int[N];
  fill(dist, dist+N, INF);
  dist[src] = 0;

  int *prev = new int[N];
  prev[src] = src;

  priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > q;
  q.push(make_pair(0, src));

  while(!q.empty()){
    pair<int, int> u = q.top();
    q.pop();

    if(u.first > dist[u.second]) continue;

    int current_id = u.second;
    Junction *current = js + current_id;

    for (int i = 0; i < M; i++) {
      Road *r = rs + i;
      if(r->src != current && r->dst != current) continue;
      int next_id = (r->src == current ? r->dst_idx : r->src_idx);
      Junction *next = js + next_id;
      int len = r->getNextOpened(u.first);
      if(len != INF) len += r->len;
      if(dist[next_id] > len) {
        prev[next_id] = u.second;
        dist[next_id] = len;
        q.push(make_pair(len, next_id));
      }
    }
  }

  if(dist[dst] == INF)
    cout << 0;
  else {
    cout << dist[dst] << endl;
    vector<int> path;
    int i = dst;
    while(src != i) {
      i = prev[i];
      path.push_back(i);
    }
    for(int i = path.size()-1; i >= 0; --i) {
      cout << path[i] + 1 << ' ';
    }
    cout << dst+1 << endl;
  }


  return 0;
}
