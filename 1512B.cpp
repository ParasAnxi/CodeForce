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
  vs vG(n);
  vpii vP;

  for (int i = 0; i < n; i++) {
    cin >> vG[i];
    for (int j = 0; j < n; j++) {
      if (vG[i][j] == '*') {
        vP.pb({i, j});
      }
    }
  }

  int r1 = vP[0].first, c1 = vP[0].second;
  int r2 = vP[1].first, c2 = vP[1].second;

  if (r1 == r2) {
    int nR = (r1 == 0) ? 1 : 0;
    vG[nR][c1] = '*';
    vG[nR][c2] = '*';
  } else if (c1 == c2) {
    int nC = (c1 == 0) ? 1 : 0;
    vG[r1][nC] = '*';
    vG[r2][nC] = '*';
  } else {
    vG[r1][c2] = '*';
    vG[r2][c1] = '*';
  }

  for (int i = 0; i < n; i++) {
    cout << vG[i] << "\n";
  }
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