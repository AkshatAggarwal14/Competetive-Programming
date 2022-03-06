#ifdef LOCAL
#include "Akshat.hpp"
#else
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
#endif
using ll = long long;
auto sz = [](const auto &container) -> ll { return ll(container.size()); };
#define all(x) (x).begin(), (x).end()
const ll INF = 1e18;

void Solution() {
    int n;
    int m;
    cin >> n >> m;
    int k = 1;

    const int MOD = 1e9 + 7;
    vector<int> OLD(10, 0), NEW(10, 0);
    while (n) {
        ++OLD[n % 10];
        n /= 10;
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 0; j <= 9; ++j) NEW[j] = 0;
        for (int j = 0; j <= 9; ++j)
            for (char &digit : to_string(j + k))
                NEW[digit - '0'] = (NEW[digit - '0'] + OLD[j]) % MOD;
        OLD = NEW;
    }
    ll ans = 0;
    for (ll i = 0; i <= 9; ++i) ans = (ans + NEW[i]) % MOD;
    // return ans;

    cout << ans << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifdef LOCAL
    [[maybe_unused]] FILE *in = freopen("input.txt", "r", stdin);
    [[maybe_unused]] FILE *out = freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        Solution();
    }
    return 0;
}