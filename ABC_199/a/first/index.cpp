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
  int a, b, c  ; cin >> a >> b >> c ;
  if (a*a + b*b < c*c) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0; 
}
