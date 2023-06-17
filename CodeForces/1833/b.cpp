#include "bits/stdc++.h"
using namespace std;
#ifdef LOCAL
#include "debug.hpp"
#else
#define dbg(...)
#endif
using ll = long long;

const ll INF = 1e18;
const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;  // 998244353;

void test() {
    ll n, k;
    cin >> n >> k;

    vector<pair<ll, ll>> a(n);
    vector<ll> b(n);
    for (ll j = 0; j < n; ++j) {
        cin >> a[j].first, a[j].second = j;
    }
    for (auto& x : b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll> result(n);
    for (ll j = 0; j < n; ++j)
        result[a[j].second] = b[j];

    for (int j = 0; j < n; ++j)
        cout << result[j] << ' ';
    cout << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {
        test();
    }
    return 0;
}
