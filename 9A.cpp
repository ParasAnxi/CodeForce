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

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
void solve() {
  int y, w;
  cin >> y >> w;
  int maxi = max(y, w);
  int n = 7 - maxi;
  int d = 6;
  int g = gcd(n, d);
  n /= g;
  d /= g;
  cout << n << '/' << d << "\n";
}
int main() {
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  //   int t;
  //   cin >> t;
  //     while (t--) {
  //       solve();
  //     }
  solve();
  return 0;
}