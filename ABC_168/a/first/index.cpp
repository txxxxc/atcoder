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
  string N; cin >> N;
  int size = N.size();
  if (N[size-1] == '2' ||N[size-1] == '4' || N[size-1] == '5' || N[size-1] == '7' || N[size-1] == '9' ) {
    cout << "hon" << endl;
  } else if (N[size-1] == '0' || N[size-1] == '1' || N[size-1] == '6' || N[size-1] == '8') {
    cout << "pon" << endl;
  } else {
    cout << "bon" << endl;
  }
  return 0; 
}
