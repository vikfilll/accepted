#include <bits/stdc++.h>
const double PI = 3.14159265358979323846;
const int maxn = 2e5 + 19;
const int INF = 2e9;
using namespace std;
int n, m, k;
long long gcd(long long a, long long b) {
    return (b ? gcd(b, a % b) : a);
}
void solve() {
    cin >> n;
    vector <long long> a(n), b;
    for (long long& i : a) cin >> i;
    b = a;
    sort(b.begin(), b.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i] && gcd(a[i], b[0]) != b[0]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
