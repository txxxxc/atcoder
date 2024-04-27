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
  ll T; cin >> T;
	while(T--){
		ll a,s; cin >> a >> s;
		string ans = "No";
		if(2*a <= s){
			ll differ = s-2*a;
			if((differ & a) == 0) ans = "Yes";
		}
		cout << ans << endl;
	}
  return 0; 
}
