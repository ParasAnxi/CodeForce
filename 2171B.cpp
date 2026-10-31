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
  vll vI(n);
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
  }
  if (vI[0] != -1 && vI[n - 1] != -1) {
    ll diff = abs(vI[n - 1] - vI[0]);
    cout << diff << "\n";
    for (int i = 0; i < n; i++) {
      if (vI[i] == -1) vI[i] = 0;
      cout << vI[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
  } else if (vI[0] == -1 && vI[n - 1] == -1) {
    bool isNeg = true;
    for (int i = 0; i < n; i++) {
      if (vI[i] != -1) {
        isNeg = false;
        break;
      }
    }
    if (isNeg) {
      cout << 0 << "\n";
      for (int i = 0; i < n; i++) {
        cout << 0 << (i == n - 1 ? "" : " ");
      }
      cout << "\n";
    } else {
      cout << 0 << "\n";
      ll val = -1;
      for (int i = 0; i < n; i++) {
        if (vI[i] != -1) {
          val = vI[i];
          break;
        }
      }
      vI[0] = val;
      vI[n - 1] = val;
      for (int i = 0; i < n; i++) {
        if (vI[i] == -1)
          vI[i] = 0;
        cout << vI[i] << (i == n - 1 ? "" : " ");
      }
      cout << "\n";
    }
  } else if (vI[0] == -1) {
    cout << 0 << "\n";
    vI[0] = vI[n - 1];
    for (int i = 0; i < n; i++) {
      if (vI[i] == -1) vI[i] = 0;
      cout << vI[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
  } else {
    cout << 0 << "\n";
    vI[n - 1] = vI[0];
    for (int i = 0; i < n; i++) {
      if (vI[i] == -1) vI[i] = 0;
      cout << vI[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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