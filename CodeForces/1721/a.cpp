#include "bits/stdc++.h"
using namespace std;
#ifdef LOCAL
#include "Akshat.hpp"
#else
#define dbg(...)
#endif
using ll = long long;
auto sz = [](const auto &container) { return int(container.size()); };
#define all(x) begin(x), end(x)

const ll INF = 1e18;
const ll N = 1e5 + 5;
const ll MOD = 1e9 + 7;  // 998244353

void test() {
    string s, t;
    cin >> s >> t;
    s += t;
    map<int, int> mp;
    ++mp[s[0]];
    ++mp[s[1]];
    ++mp[s[2]];
    ++mp[s[3]];
    if (mp.size() == 4) return void(cout << "3\n");
    if (mp.size() == 3) return void(cout << "2\n");
    if (mp.size() == 1) return void(cout << "0\n");
    cout << "1\n";
}

int32_t main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifdef LOCAL
    [[maybe_unused]] FILE *in = freopen("input.txt", "r", stdin);
    [[maybe_unused]] FILE *out = freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    int tc = 1;
    cin >> tc;
    for (int tt = 1; tt <= tc; ++tt) {
        test();
    }
    return 0;
}
