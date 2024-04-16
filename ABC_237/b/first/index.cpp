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
  int h, w; cin >> h >> w;
  vector<vector<int>> A(h, vector<int>(w,0));
  vector<vector<int>> B(w, vector<int>(h, 0));
  rep(i, h) rep(j, w) {
    int v; cin >> v;
    A[i][j] = v;
  }

  rep(i, h) rep(j, w) {
    B[j][i] = A[i][j];
  }

  rep(i, w)  {
    rep(j, h) {
      cout << B[i][j] << " ";
    }
    cout << endl;
  }

  return 0; 
}
