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
  int n, m; cin >> n >> m;
  // ペアが取り出せるidxが入ってるqueue
  queue<int> next;

  // 色のペアが属する筒のidxが入ってる
  vector<vector<int>> idxes(300300, vector<int>()); 

  // queueの配列
  vector<queue<int>> a(300300, queue<int>());
  rep(i, m) {
    int k ; cin >> k ;
    rep(j, k) {
      int aa; cin >> aa;
      a[i].push(aa);
    }
    int v = a[i].front();
    idxes[v].push_back(i);
    if (idxes[v].size() == 2) next.push(v);
  }

  int nn = n*2; 
  while(!next.empty()) {
    nn -= 2;
    if (nn == 0) break;
    int color = next.front(); next.pop();
    for (int v: idxes[color]) {
      a[v].pop();
      // 筒の次の値
      if (a[v].size() == 0) continue;
      int vv = a[v].front();
      // 次の値に筒のidxを入れる
      idxes[vv].push_back(v);
      if (idxes[vv].size() == 2) next.push(vv);
    }
  }

  if (nn == 0) printf("Yes");
  else printf("No");

  return 0; 
}
