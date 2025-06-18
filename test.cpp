#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef pair<int, int> ii;
typedef pair<ll, int> lli;
typedef unsigned long long ull;
typedef unsigned long long int ulli;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<vector<ii>> vpi;

#define fi first
#define se second
#define pb push_back
#define ed cout << "\n"
#define no cout << "NO\n"
#define ye cout << "YES\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define FOB(i, l, r) for (int i = l; i < r; i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define all(a) a.begin(), a.end()
#define sz(A) (int)A.size()
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)

template <typename T, typename U> inline bool chmax(T &a, U b) { return a < b ? (a = b, true) : false; }
template <typename T, typename U> inline bool chmin(T &a, U b) { return a > b ? (a = b, true) : false; }

const int N = 2e5 + 15;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 1;

int nxt() { int x; cin >> x; return x; }

void add(int &a, int b) {
    a = a + b;
    if (a >= MOD) a = a - MOD;
    if (a < 0) a = a + MOD;
}

void mul(int &a, int b) {
    ll res = ((ll)a * b) % MOD;
    a = res;
}

ll modulo(ll a, ll b) {
    return a * ((MOD + 1) / b) % MOD;
}

template <typename T> T mod(T a, T b) {
    if (b < 0) b = -b;
    return (a % b + b) % b;
}

void solve() {
    
}

int main() {
    faster();
    // freopen("input.INP", "r", stdin);
    // freopen("output.OUT", "w", stdout);
    int t; t = 1;
    // cin >> t;
    while (t--) {
        clock_t z = clock();
        solve();
        debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
        if (t != 0) ed;
    }
    return (0 ^ 0);
}