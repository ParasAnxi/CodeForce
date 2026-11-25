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
#define MAX_N 200001
#define MAX_L 18
#define MOD 1000000007
#define INF 1000000000LL
#define LMOD 1000000000000000007LL

void solve() {
  int n;
  cin >> n;
  vi vI(n);
  vi t6, t2, t3, t0;
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
    bool d2 = (vI[i] % 2 == 0);
    bool d3 = (vI[i] % 3 == 0);
    if (d2 && d3)
      t6.pb(vI[i]);
    else if (d2)
      t2.pb(vI[i]);
    else if (d3)
      t3.pb(vI[i]);
    else
      t0.pb(vI[i]);
  }

  vi ans;
  for (auto x : t6)
    ans.pb(x);
  for (auto x : t2)
    ans.pb(x);
  for (auto x : t0)
    ans.pb(x);
  for (auto x : t3)
    ans.pb(x);

  for (int i = 0; i < n; i++) {
    cout << ans[i] << (i == n - 1 ? "" : " ");
  }
  cout << "\n";
}

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  // solve();
  return 0;
}