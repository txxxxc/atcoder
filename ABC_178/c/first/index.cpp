#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
const ll MOD = 1000000007;

ll func(ll a, ll n){
    ll ans = 1;
    for(ll i = 0; i < n; i++){
        ans *= a;
        ans %= MOD;
    }
    return ans;
}

int main() { 
  ll n;
  cin >> n;
  ll ans = func(10, n) - func(9, n) - func(9, n) + func(8, n);
  ans += MOD*2;
  ans %= MOD;
  cout << ans << endl;
  return 0; 
}
