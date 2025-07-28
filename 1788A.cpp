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
  vi vI(n);
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
  }
  int tt = 0;
  for (int i : vI)
    if (i == 2)
      tt++;
  if (tt % 2) {
    cout << -1 << "\n";
    return;
  }
  if (tt == 0) {
    cout << 1 << "\n";
    return;
  }
  int half = tt / 2;
  int cnt2 = 0;
  int ans = -1;
  for (int i = 0; i < n; i++) {
    if (vI[i] == 2)
      cnt2++;
    if (cnt2 == half) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << "\n";
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
  // solve();
  return 0;
}