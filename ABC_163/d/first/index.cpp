#include <bits/stdc++.h>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const int MOD = 1000000007;
int main() { 
    long long N, K;
    cin >> N >> K;
    long long res = 0;
    for (long long k = K; k <= N+1; ++k) {
        long long first = k * (k-1) / 2;
        long long final = (N*2-k+1) * k / 2;
        long long add = final - first + 1;
        res = (res + add) % MOD;
    }
    cout << res << endl;
  return 0; 
}
