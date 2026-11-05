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
  string s;
  cin >> s;
  int c2025 = 0;
  for (int i = 0; i <= n - 4; i++) {
    if (s.substr(i, 4) == "2025") {
      c2025++;
    }
  }
  string tar = "2026";
  int mini26 = 4;
  for (int i = 0; i <= n - 4; i++) {
    int cost = 0;
    for (int j = 0; j < 4; j++) {
      if (s[i + j] != tar[j]) {
        cost++;
      }
    }
    mini26 = min(mini26, cost);
  }
  cout << min(c2025, mini26) << "\n";
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