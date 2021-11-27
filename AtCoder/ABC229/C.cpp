#ifdef LOCAL
// https://github.com/AkshatAggarwal14/Competetive-Programming
#include "Akshat.hpp"
#else
#include "bits/stdc++.h"
using namespace std;
#define dbg(...)
#endif
using ll = int64_t;
auto sz = [](const auto &container) -> ll { return container.size(); };
#define all(x) (x).begin(), (x).end()
template <class T, class U = T>
bool amin(T &a, U &&b) { return b < a ? a = std::forward<U>(b), true : false; }
template <class T, class U = T>
bool amax(T &a, U &&b) { return a < b ? a = std::forward<U>(b), true : false; }

void Solution() {
    ll n, w, ans = 0;
    cin >> n >> w;
    vector<pair<ll, ll>> AB(n);
    for (ll i = 0; i < n; ++i) cin >> AB[i].first >> AB[i].second;
    sort(all(AB), [&](pair<ll, ll> A, pair<ll, ll> B) {
        if (A.first == B.first) return A.second > B.second;
        return A.first > B.first;
    });
    dbg(AB);
    for (ll i = 0; i < n; ++i) {
        if (AB[i].second >= w) {
            ans += (AB[i].first * w);
            break;
        }
        w -= AB[i].second;
        ans += (AB[i].first * AB[i].second);
    }
    cout << ans << '\n';
}

// clang-format off
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << fixed << setprecision(12);
    // ll tc; cin >> tc; while (tc--)
    Solution();
    return 0;
}