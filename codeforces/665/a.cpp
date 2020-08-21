#include <bits/stdc++.h>
const double PI = 3.14159265358979323846;
const int maxn = 2e5 + 19;
const int INF = 2e9;
using namespace std;
int n, m, k;

void solve() {
    cin >> n >> k;
    if (k >= n) cout << k - n << '\n';
    else cout << (n % 2 == k % 2 ? 0 : 1) << '\n';
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