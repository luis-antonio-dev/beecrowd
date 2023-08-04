#include <bits/stdc++.h>

using namespace std;
#define db(x) cout << #x << ": " << x << endl
#define cv(vector)        \
    for (auto x : vector) \
        cout << x << " "; \
    cout << endl
#define cm(map)                             \
    for (auto e : map)                      \
        cout << e.first << " " << e.second; \
    cout << endl
#define FOR(i, a, b) for (ll i = a; i < (b); ++i)
#define foreach(a, b) for (auto &(a) : (b))
#define rep(i, n) FOR(i, 0, n)
#define Rep(i, a, b) for (ll i = a; i >= (b); i--)
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;


int main(int argc, char **argv) {
    cin.tie(0)->sync_with_stdio(0);

    ll cigarettes, butts;
    while (cin >> cigarettes >> butts) {
        ll ans = cigarettes;
        while (cigarettes >= butts) {
            ans += (cigarettes / butts);
            cigarettes = (cigarettes / butts) + (cigarettes % butts);
        }
        cout << ans << endl;
    }
    return 0;
}

