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
  vector<ll> a(n); rep(i, n) cin >> a[i];
  vector<ll> r;
  ll s = 0;
  rep(i, n) {
    // 奇数のとき
    if (i % 2 == 0) s += a[i]*2;
    else s -= a[i]*2;
  }

  r.push_back(s/2);
  for (int i = 1; i<n; i++) {
      r.push_back((a[i-1] * 2) - r[i-1]);
  }
  for (auto v: r) { 
    cout << v << " ";
  }
  return 0; 
}
