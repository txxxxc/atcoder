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
  vector<P> vec(n);
  map<P, int> mp;
  vector<int> result;
  rep(i, n) {
    int a, c; cin >> a >> c;
    vec[i] = make_pair(a, c);
    mp[vec[i]] = i+1;
  }
  sort(vec.begin(), vec.end(), [&](P a, P b) {return a.second < b.second;});
  result.push_back(mp[vec[0]]);
  rep(i, n - 1) {
    if (vec[i].first < vec[i+1].first) {
      result.push_back(mp[vec[i+1]]);
    } 
  }
  sort(result.begin(), result.end());
  cout << result.size() << endl;
  for (auto v: result) {
    cout << v << " ";
  }
  return 0; 
}
