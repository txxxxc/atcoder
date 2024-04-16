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
  string s; cin >> s;
  int l = 0;
  int r = s.size() - 1;
  // l,rがaのとき消す
  while(s[l] == 'a' && s[r] == 'a') { l++; r--; }
  // rのaだけ可能な限り消す
  while(s[r] == 'a') { r--; }

  while (s[l] == s[r] && l <= r) { l++; r--; }

  if (l < r) { cout << "No" << endl; }
  else cout << "Yes" << endl;
  

  return 0; 
}
