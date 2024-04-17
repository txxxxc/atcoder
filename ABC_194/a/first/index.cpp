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
  // 乳固形分は無脂乳固形分と乳脂肪分
  int a, b; cin >> a >> b;
  int c = a + b;
  if (c >= 15 && b >= 8) {
    cout << 1 << endl;
  } else if (c >= 10 && b >= 3) {
    cout << 2 << endl;
  } else if (c >= 3) {
    cout << 3 << endl;
  } else {
    cout << 4 << endl;
  }
  return 0; 
}
