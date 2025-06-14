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
  int n, k;
  cin >> n >> k;
  string st;
  cin >> st;
  int c0 = 0;
  int c1 = 0;
  for (auto ch : st) {
    if (ch == '0') {
      c0++;
    } else {
      c1++;
    }
  }
  int tP = n / 2;
  int mini = abs(c0 - c1) / 2;
  if (k < mini) {
    cout << "NO" << endl;
    return;
  }
  int zP = c0 - (tP - k);
  if (zP % 2 != 0) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
}
int main() {
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
