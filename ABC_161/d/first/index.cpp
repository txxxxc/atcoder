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
  int k; cin >> k;
  vector<ll> a;
  priority_queue<ll, vector<ll>,  greater<ll>> pq;
  for (int i = 1; i<= 9; i++) {
    pq.push(i); a.push_back(i);
  }
  while (true) {
    ll v = pq.top();
    pq.pop();
    string str = to_string(v);
    int size = str.size();
    char digit = str[size - 1];
    if (digit - '0' != 0) {
      string vv = to_string((digit - '0') - 1);
      pq.push(stoll(str+vv));
      a.push_back(stoll(str+vv));
    }
    pq.push(stoll(str+digit));
    a.push_back(stoll(str+digit));

    if (digit - '0' != 9) {
      string vv = to_string((digit - '0') + 1);
      pq.push(stoll(str+vv));
      a.push_back(stoll(str+vv));
    }
    if (a.size() >= k) break;
  }
  sort(a.begin(), a.end());
  cout << a[k-1] << endl;
  return 0; 
}
