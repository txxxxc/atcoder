#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

ll MOD = 998244353;
ll func(ll n) {
  return ((n % MOD * ((1+(n % MOD))) / 2)) % MOD;
}

int main() { 
  ll N; cin >> N;
  ll ans = 0;

  // 1 * 桁数-1;
  ll a = 1;
  ll size = to_string(N).size() - 1;
  rep(i, size) a *= 10;
  ans += func(N - a + 1) % MOD;
  N = a - 1LL;

  rep(i, size) {
    ll v = 1;
    rep(j, i) v *= 10LL % MOD;
    ans += func(((v*10LL) % MOD - 1LL) - (v) + 1LL ) % MOD;
  }
  cout << ans % MOD << endl;

  return 0; 
}
