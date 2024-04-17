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
  int n; cin >> n;
  vector<P> ab(n);
  vector<int> c(n);
  int ans = 100100;
  rep(i, n) {
    int a, b; cin >> a >> b;
    P p = make_pair(a, b);
    ab[i] = p;
  }

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j<n; j++) {
      P p = ab[i];
      P pp = ab[j];
      int a = p.first; int b = p.second;
      int c = pp.first; int d = pp.second;
      int e = 0;
      int f = 0;
      int g = 0;
      int h = 0;
      e = a;
      f = d;
      g = b;
      h = c;
      ans = min(ans, max(e, f));
      ans = min(ans, max(g, h));
      ans = min(ans, min(a+b, c+d));
    }
  }
  cout << ans << endl;
  return 0; 
}
