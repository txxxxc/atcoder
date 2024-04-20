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
  double r, x, y;
  cin >> r >> x >> y;

  double distance = sqrt(x * x + y * y);
  int ans = ceil(distance / r);
  if (ans == 1 && distance != r) ans++;
  cout << ans << endl;
  return 0; 
}
