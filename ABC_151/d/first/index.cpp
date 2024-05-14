#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int h, w; 

vector<vector<char>> g;
vector<vector<bool>> visited;
vector<vector<int>> score;

bool isValid(int y, int x) {
  if (y >= h || x >= w || y < 0 || x < 0) {
    return false;
  }
  if (g[y][x] == '#') {
    return false;
  }
  return true;
}
// できるだけ最小を目指す
int solve(int y,int x) {
  score = vector<vector<int>>(h, vector<int>(w, 1000000));
  stack<P> stk;
  vector<vector<int>> result = vector<vector<int>>(h, vector<int>(w, 100000));
  P p = make_pair(y, x);
  stk.push(p);
  score[p.first][p.second] = 0;
  while (!stk.empty()) {
    P p = stk.top(); stk.pop();
    int v = score[p.first][p.second] + 1;
    // 下
    if (isValid(p.first+1, p.second) && v < score[p.first+1][p.second]) {
      score[p.first+1][p.second] = v;
      stk.push(make_pair(p.first+1, p.second));
    }

    // 上
    if (isValid(p.first-1, p.second) && v < score[p.first-1][p.second]) {
      score[p.first-1][p.second] = v;
      stk.push(make_pair(p.first-1, p.second));
    }

    // 右
    if (isValid(p.first, p.second+1) && v < score[p.first][p.second+1]) {
      score[p.first][p.second+1] = v;
      stk.push(make_pair(p.first, p.second+1));
    }

    // 左
    if (isValid(p.first, p.second-1) && v < score[p.first][p.second-1]) {
      score[p.first][p.second-1] = v;
      stk.push(make_pair(p.first, p.second-1));
    }
  }
  int answer = -1;
  for (auto v: score) {
    for (auto vv: v) {
      if (vv == 1000000) continue;
      answer = max(answer, vv);
    }
  }

  return answer;

}

int main() { 
  cin >> h >> w;
  g.resize(h, vector<char>(w, ' '));
  vector<P> list;
  int answer = -1;
  rep(i, h) rep(j, w) {
    char c; cin >> c;
    g[i][j] = c;
  }
  rep(i, h) rep(j, w) list.push_back(make_pair(i, j));
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (g[i][j] == '#') continue;
      int r = solve(i, j);
      answer = max(answer, r);
    }
  }
  cout << answer << endl;
  return 0; 
}
