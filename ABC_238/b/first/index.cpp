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
  vector<int> a(n+1); rep(i, n) cin >> a[i+1];
  vector<int> b(n+1);
  int ans = 0;
  for (int i = 1; i <=n; i++) {
    b[i] += (b[i-1] + a[i]) % 360;
  }
  b.push_back(360);
  sort(b.begin(), b.end());
  for (int i = 1; i < b.size(); i++) {
    ans = max(ans, abs(b[i] - b[i-1]));
  }
  cout << ans << endl;
  return 0; 
}
