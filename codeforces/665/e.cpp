#include <bits/stdc++.h>
const double PI = 3.14159265358979323846;
const int maxn = 1e6;
const int INF = 2e9;
const int MOD = 1e9 + 7;
using namespace std;
int n, m, k;

struct segTree {
    vector <int> t;

    void make() {
        t.assign(4 * (maxn + 1), 0);
    }

    void add(int v, int tl, int tr, int pos, int val) {
        if (tl == tr) {
            t[v] += val;
            return;
        }
        int tm = (tl + tr) >> 1;
        if (pos <= tm) add(v << 1, tl, tm, pos, val);
        else add(v << 1 | 1, tm + 1, tr, pos, val);
        t[v] = t[v << 1] + t[v << 1 | 1];
    }

    int sum(int v, int tl, int tr, int l, int r) {
        if (l > r) return 0;
        if (tl == l && r == tr) return t[v];
        int tm = (tl + tr) >> 1;
        int sum_L = sum(v << 1, tl, tm, l, min(r, tm));
        int sum_R = sum(v << 1 | 1, tm + 1, tr, max(l, tm + 1), r);
        return sum_L + sum_R;
    }

};

segTree tree;
vector <vector <int>> in(maxn + 13), out(maxn + 13);
struct section {
    int ly, ry;
};
vector <vector <section>> seg(maxn + 1);

void solve() {
    cin >> n >> m;
    tree.make();
    long long ans = 1;
    for (int i = 0; i < n; ++i) {
        int y, lx, rx; cin >> y >> lx >> rx;
        ans += (!lx && rx == maxn);
        in[lx].push_back(y);
        out[rx + 1].push_back(y);
    }
    for (int i = 0; i < m; ++i) {
        int x, ly, ry; cin >> x >> ly >> ry;
        ans += (!ly && ry == maxn);
        seg[x].push_back({ ly, ry });
    }
    for (int x = 0; x <= maxn; ++x) {
        for (int y : out[x]) {
            tree.add(1, 0, maxn, y, -1);
        }
        for (int y : in[x]) {
            tree.add(1, 0, maxn, y, 1);
        }
        for (auto i : seg[x]) {
            ans += tree.sum(1, 0, maxn, i.ly, i.ry);
        }
    }
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int qq = 1;
    //cin >> qq;
    while (qq--) solve();
    return 0;
}

