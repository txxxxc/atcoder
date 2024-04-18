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
  map<ll, ll> mp;
  ll answer = 0;
  rep(i, n) {
    ll a; cin >> a;
    mp[a]++;
  }

  for (auto p: mp) {
    for (auto pp: mp) {
      if(p.first > pp.first) continue;
      ll v = abs(p.first - pp.first);
      answer += (p.second * pp.second) * (v*v);
    }
  }
  cout << answer << endl;

  return 0; 
}
