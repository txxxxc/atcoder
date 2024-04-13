#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 1: 0(1)
// 10: 0(2)
// 100: 0(3)
// 1,000: 1(4)
// 10,000: 1(5)
// 100,000: 1(6)
// 1,000,000: 2(7)
// (n-1) / 3;

ll func(int n) {
  ll v = 1;
  rep(i, n) {
    v *= 10;
  }
  return v;
}

int main() { 
  ll n; cin >> n;
  ll ans = 0;
  // 桁数を取得する(999)
  // 桁数分の数値を作る(100)
  // 差を計算する(999 - 100 + 1 = 900);
  // 出てきた差分加算する
  // 差を下から引く
  while (n >= 1000) {
    ll d = to_string(n).size();
    ll v = func(d-1);
    ll c = n - v + 1;
    ans += c * ((d - 1) / 3);
    n -= c;
  }
  cout << ans << endl;

  return 0; 
}
