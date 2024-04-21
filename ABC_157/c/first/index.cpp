#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() { 
  int n, m; cin >> n >> m;
  vector<P> sc(m);
  vector<set<int>> d(3);
  rep(i, m) {
    int s, c; cin >> s >> c;
    s--;
    sc[i] = make_pair(s, c);
    d[s].insert(c);
  }
  // 同じ桁に条件がある
  rep(i, 3) {
    if (d[i].size() > 1) {
      cout << -1 << endl;
      return 0;
    }
  }
  
  // 普通に判定
  int ans = -1;
  if (n == 1) {
    for (int i = 0; i < 10; i++) {
      bool tmp = true;
      string s = to_string(i);
      rep(i, m) {
        if (s[sc[i].first] - '0' != sc[i].second) tmp = false;
      }
      if (tmp) {
        ans = i;
        break;
      }
    }
  }

  if (n == 2) {
    for (int i = 10; i < 100; i++) {
      bool tmp = true;
      string s = to_string(i);
      rep(i, m) {
        if (s[sc[i].first] - '0' != sc[i].second) tmp = false;
      }
      if (tmp) {
        ans = i;
        break;
      }
    }
  }

  if (n == 3) {
    for (int i = 100; i < 1000; i++) {
      bool tmp = true;
      string s = to_string(i);
      rep(i, m) {
        if (s[sc[i].first] - '0' != sc[i].second) tmp = false;
      }
      if (tmp) {
        ans = i;
        break;
      }
    }
  }

  cout << ans << endl;
  return 0; 
}
