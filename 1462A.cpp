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
  vll vB(n);
  for (int i = 0; i < n; i++) {
    cin >> vB[i];
  }

  int s = 0, e = n - 1;
  vll vA;
  vA.reserve(n);

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      vA.pb(vB[s++]);
    } else {
      vA.pb(vB[e--]);
    }
  }
  for (auto i : vA) {
    cout << i << ' ';
  }
  cout << "\n";
}
int main() {
  // freopen("input.txt", "e", stdin);
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