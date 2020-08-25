#include <bits/stdc++.h>
const double PI = 3.14159265358979323846;
const int maxn = 2e5 + 19;
const int INF = 2e9;
const int MOD = 1e9 + 7;
using namespace std;
int n, m, k;
vector <vector <int>> g(maxn);
vector <long long> res;
 
int dfs(int v, int pr) {
    int sz = 1;
    for (int u : g[v]) {
        if (pr == u) continue;
        int szL = dfs(u, v);
        res.push_back(1LL * szL * (n - szL));
        sz += szL;
    }
    return sz;
}
 
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        g[i].clear();
    }
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cin >> m;
    vector <int> fact(max(n - 1, m), 1);
    for (int i = 0; i < m; ++i) cin >> fact[i];
    sort(fact.begin(), fact.end());
    for (; m > n - 1; --m) {
        fact[m - 2] = (1LL * fact[m - 2] * fact[m - 1]) % MOD;
    }
    res.clear();
    dfs(1, -1);
    sort(res.begin(), res.end());
    int ans = (1LL * fact[max(n - 1, m) - 1] * res.back()) % MOD;
    for (int i = 0; i < n - 2; ++i) {
        ans = (ans + (1LL * res[i] * fact[i]) % MOD) % MOD;
    }
    cout << ans << '\n';
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
