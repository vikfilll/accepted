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
const double PI = 3.14159265358979323846;
const int maxn = 2e5 + 19;
const int INF = 2e9;
using namespace std;
int n, m, k;

void solve() {
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] != a[i + 1]) {
            cout << 1 << '\n';
            return;
        }
    }
    cout << n << '\n';
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