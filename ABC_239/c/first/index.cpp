#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int func(int a, int b) {
  return a*a + b*b;
}

int main() { 
  int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
  map<P, int> mp;
  for (int x = -2; x <= 2; x++) {
    for (int y = -2; y <= 2; y++) {
      int xx = x1+x;
      int yy = y1+y;
      if (func(x1 - xx, y1 - yy) == 5) {
        mp[P(xx, yy)] += 1;
      }
      int xxx = x2+x;
      int yyy = y2+y;
      if (func(x2 - xxx, y2 - yyy) == 5) {
        mp[P(xxx, yyy)] += 1;
      }
    }
  }
  for (auto v: mp) {
    if (v.second >= 2) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0; 
}
