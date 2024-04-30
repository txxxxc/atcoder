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
  ll x; cin >> x;
  if (x < 0 && x % 10 != 0) {
    cout << x/10 - 1 << endl;
  } else {
    cout << x / 10 << endl;
  }
  return 0; 
}
