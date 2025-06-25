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

vi vO;

void solve() {
  int n;
  cin >> n;
  int cnt = upper_bound(vO.begin(), vO.end(), n) - vO.begin();
  cout << cnt << "\n";
}
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  for (int i = 1; i <= 9; i++) {
    int num = 0;
    for (int j = 1; j <= 9; j++) {
      num = num * 10 + i;
      vO.pb(num);
    }
  }
  sort(vO.begin(), vO.end());
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  // solve();
  return 0;
}