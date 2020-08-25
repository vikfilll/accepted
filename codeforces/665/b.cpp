#include <bits/stdc++.h>
const double PI = 3.14159265358979323846;
const int maxn = 2e5 + 19;
const int INF = 2e9;
using namespace std;
int n, m, k;
 
void solve() {
    long long k1, k2, k0, K1, K0, K2;
    cin >> k0 >> k1 >> k2 >> K0 >> K1 >> K2;
    long long ans = min(K1, k2) * 2;
    if (K1 > k2) K1 -= k2, k2 = 0;
    else k2 -= K1, K1 = 0;
    long long MI = 0;
    if (k1 > K1 + K0 && K2 > k0 + k2) MI = (k1 - K1 - K0) * 2;
    cout << ans - MI << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int qq;
    cin >> qq;
    while (qq--) solve();
    return 0;
}
