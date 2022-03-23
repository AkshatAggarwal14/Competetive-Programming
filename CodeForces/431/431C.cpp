#ifdef LOCAL
#include "Akshat.hpp"
#else
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
#endif
using ll = long long;
auto sz = [](const auto &container) { return int(container.size()); };
#define all(x) begin(x), end(x)

const ll INF = 1e18;
const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;  // 998244353

void test() {
    ll n, k, d;
    cin >> n >> k >> d;
    vector<ll> dp1(n + 1, 0), dp2(n + 1, 0);
    dp1[0] = dp2[0] = 1;
    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= k; ++j)
            if (j <= i) (dp1[i] += dp1[i - j]) %= MOD;
        for (ll j = 1; j <= d - 1; ++j)
            if (j <= i) (dp2[i] += dp2[i - j]) %= MOD;
    }
    // d - 1 wale saare ways hata diye
    cout << (dp1[n] - dp2[n] + MOD) % MOD << '\n';
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifdef LOCAL
    [[maybe_unused]] FILE *in = freopen("input.txt", "r", stdin);
    [[maybe_unused]] FILE *out = freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    int tc = 1;
    // cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {
        test();
    }
    return 0;
}
