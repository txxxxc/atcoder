#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() { 
  vector<vector<int>> a(3, vector<int>(3, 0));
  vector<bool>  b(1000, false);
  rep(i, 3) rep(j, 3) {
    int v; cin >> v;
    a[i][j] = v;
  }
  int n; cin >> n;
  rep(i, n) {
    int v; cin >> v;
    b[v] = true;
  }
  bool result = false;

  // horizontal
  rep(i, 3) {
    if (b[a[i][0]] && b[a[i][1]] && b[a[i][2]]) {
      result = true;
    }
  }

  // vertical
  rep(i, 3) {
    if (b[a[0][i]] && b[a[1][i]] && b[a[2][i]]) {
      result = true;
    }
  }

  if (b[a[0][0]] && b[ a[1][1] ] && b[ a[2][2] ]) result = true;
  if (b[ a[0][2] ] && b[ a[1][1] ] && b[ a[2][0] ]) result = true;

  if (result) printf("Yes");
  else printf("No");

  return 0; 
}
