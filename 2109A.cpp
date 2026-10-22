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

int n;
vi vI;
int dp[105][2];
bool solveF(int i, int isW) {
  if (i == n - 1) {
    if (vI[i] == 1)
      return isW >= 1;
    else
      return isW == 0;
  }
  if (dp[i][isW] != -1)
    return dp[i][isW];
  bool isPos = false;
  for (int nW = 0; nW <= 1; ++nW) {
    int tW = isW + (1 - nW);

    bool currM = false;
    if (vI[i] == 1 && tW >= 1)
      currM = true;
    if (vI[i] == 0 && tW == 0)
      currM = true;
    if (currM) {
      if (solveF(i + 1, nW)) {
        isPos = true;
        break;
      }
    }
  }
  return dp[i][isW] = isPos;
}

void solve() {
  cin >> n;
  vI.resize(n);
  for (int i = 0; i < n; ++i) {
    cin >> vI[i];
  }
  memset(dp, -1, sizeof(dp));
  if (solveF(0, 0)) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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