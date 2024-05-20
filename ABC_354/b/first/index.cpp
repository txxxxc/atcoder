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
  vector<string> s(n);
  vector<int> c(n);
  rep(i, n) {
    cin >> s[i]; cin >> c[i];
  }
  int sum = 0; rep(i, n) sum += c[i];
  sort(s.begin(), s.end());
  cout << s[sum % n] << endl;
  return 0; 
}
