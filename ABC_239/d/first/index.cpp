#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

// 高橋の持つ数字の中で、青木の持ってる数字と組み合わせて素数にならないものがあれば高橋の勝ち
// 青木が高橋の数字を全部素数にできれば青木の勝ちです。

bool is_prime(int n) {
  if (n == 2) return true;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

// takahashi = 素数になるな
// aoki=全部素数がいい

int main() { 
  int a, b, c, d; cin >> a >> b >> c >> d;
  bool isTakahashiWin = false;
  for (int i = a; i <= b; i++) {
    // 青木が素数にできるか
    bool tmp = false;
    for (int j = c; j<= d; j++) {
      if (is_prime(i + j)) {
        tmp = true;
        break;
      }
    }
    if (!tmp) isTakahashiWin = true;
  }
  if (isTakahashiWin) cout << "Takahashi" << endl;
  else cout << "Aoki" << endl;
  return 0; 
}
