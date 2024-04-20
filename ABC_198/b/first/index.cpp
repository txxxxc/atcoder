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
  string n; cin >> n;
  int l = 0;
  int r = n.size() - 1;
  while (n[r] == '0') { r--; }
  while (l < r && n[l] == n[r]){ l++; r--; } 
  if (l >= r) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0; 
}
