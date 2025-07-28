#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using cd = complex<double>;
using pii = pair<int, int>;
using psi = pair<string, int>;
using pll = pair<ll, ll>;
using ppii = pair<int, pii>;
using vi = vector<int>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using pis = pair<int, string>;
using vs = vector<string>;
using mii = map<int, int>;
using mll = map<ll, ll>;
using umii = unordered_map<int, int>;
using umcvi = unordered_map<char, vi>;
using umci = unordered_map<char, int>;
#define pb push_back
#define MOD 1000000007
#define LMOD 1000000000000000007LL

void solve() {
  int n;
  cin >> n;
  vll vI(n);
  for (ll &x : vI)
    cin >> x;
  ll m1 = 0, m2 = 0;
  for (ll i : vI) {
    if (i > m1) {
      m2 = m1;
      m1 = i;
    } else if (i > m2) {
      m2 = i;
    }
  }
  for (int i = 0; i < n; i++) {
    ll ans = (vI[i] == m1) ? (vI[i] - m2) : (vI[i] - m1);
    cout << ans << " ";
  }
  cout << "\n";
}

int main() {
  // freopen("input.txt", "rS", stdin);
  // freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  //   solve();
  return 0;
}