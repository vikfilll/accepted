//#include <bits/stdc++.h>
#include <iostream>
#include <fstream> 
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <string>
#include <bitset>
#include <queue>
#include <vector>
#include <deque>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <numeric>
#include <iomanip>
#define ll long long
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define ins insert
#define se second
#define all(x) (x).begin(), (x).end()
#define vi vector <int>
#define vvi vector<vector<int>>
#define k1(x) __builtin_popcount(x)
#define sl0(x) __builtin_clz(x)
#define sp0(x) __builtin_ctz(x)
#define pii pair <int, int>
#define pdd pair <double, double>
#define vpii vector <pii>
#define vvpii vector<vector<pii>>
const double PI = acos(-1);
const int maxn = 2e5 + 19;
const int INF = 2e9;
const ll MOD = 1234567891;
using namespace std;
int n, m, k, qq;
void solve() {
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] != a[i + 1]) { cout << 1 << '\n'; return; }
    }
    cout << n << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> qq;
    while (qq--) solve();
    return 0;
}