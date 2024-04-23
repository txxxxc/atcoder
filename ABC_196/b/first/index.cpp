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
  string x; cin >> x;
  int index = -1;
  rep(i, x.size()) {
    if (x[i] == '.') {
      index = i;
      break;
    }
  }
  if (index == -1) cout << x << endl;
  else cout << x.substr(0, index);
  return 0; 
}
