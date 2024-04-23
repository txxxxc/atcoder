#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n; cin >> n;
    int size = to_string(n).size();
    long long ans = 0;
    if (size % 2 == 1) {
        long long v = 1;
        size--;
        for (int i = 0; i < size; i++) v *= 10;
        n = v-1;
    } else {
        long long a = stoll(to_string(n).substr(0, size / 2));
        long long b = stoll(to_string(n).substr(size /2, size /2));
        if (a <= b) {
            long long v = 1;
            for (int i = 0; i < size / 2 - 1; i++) v *= 10;
            ans += (min(a, b) - v) + 1;
        }
        size -= 2;
    }

    for (int i = size; i > 0; i -= 2) {
        string s = "";
        for (int j = 0; j < i / 2; j++) s += "9"; 
        long long v = 1;
        for (int j = 0; j < i / 2 - 1; j++) v *= 10;
        ans += stoi(s) - v + 1;
    }
    cout << ans << endl;
    return 0;
}
