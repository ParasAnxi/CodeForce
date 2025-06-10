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

bool solveSeg(const vi &vI, int k) {
  int n = vI.size();
  for (int l = 0; l < n; ++l) {
    umii mp;
    int maxFreq = 0, mostCommon = 0;
    for (int r = l; r < n; ++r) {
      mp[vI[r]]++;
      if (mp[vI[r]] > maxFreq || (mp[vI[r]] == maxFreq && vI[r] == k)) {
        maxFreq = mp[vI[r]];
        mostCommon = vI[r];
      }
      if (mostCommon == k)
        return true;
    }
  }
  return false;
}

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> vI(n);
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
  }
  if (solveSeg(vI, k)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}
int main() {
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
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