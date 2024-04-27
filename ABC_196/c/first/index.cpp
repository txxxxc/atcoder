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
  ll n; cin >> n;
  ll ans = 0;
  for (int i = 1; i <= 1001000; i++) {
    string str = to_string(i) + to_string(i);

    if (stoll(str) > n) break;
    ans++;
  }
  cout << ans << endl;
  return 0; 
}
