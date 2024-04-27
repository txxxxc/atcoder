#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;
#define debug(arg) std::cerr << #arg << ": " << (arg) << '\n'
#define INF ((1LL << 62) - (1LL << 31))
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() { 
  double a, b, h, m; 
  cin >> a >> b >> h >> m;
  double pi = 3.14159265358979;

  double H = h*pi/6.0 + m*pi/360.0;
  double M = m*pi/30;
  cout << setprecision(20) << sqrt(a*a+b*b-2*a*b*cos(H-M)) << endl;
  return 0; 
}
