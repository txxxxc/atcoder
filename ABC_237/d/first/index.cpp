#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

struct List {
  bool first;
  int left;
  int right;
};

int main() { 
  int n; cin >> n;
  string s; cin >> s;
  vector<List> vec(n+1);
  vec[0] = List{ true, -1, -1 };
  for (int i = 1; i <= s.size(); i++) {
    char v = s[i-1];
    if (v == 'L') {
      List str = List{ false, -1, -1 };
      str.right = i-1;
      str.left = vec[i-1].left;
      str.first = vec[i-1].first;
      vec[i] = str;
      vec[i-1].first = false;
      vec[i-1].left = i;
      if (str.left != -1) vec[str.left].right = i;
    }
    if (v == 'R') {
      List str = List{ false, -1, -1 };
      str.left = i-1;
      str.right = vec[i-1].right;
      vec[i] = str;
      vec[i-1].right = i;
      if (str.right != -1) vec[str.right].left = i;
    }
  }
  int start = -1;
  for (int i = 0; i < n+1; i++) {
    if (vec[i].first) {
      start=i;
      break;
    }
  }
  if (start == -1) {
    cout << "error";
    return 0;
  }
  int next = start;
  while(true) {
    cout << next << " ";
    next = vec[next].right;
    if (next == -1) break;
  }
  return 0; 
}
