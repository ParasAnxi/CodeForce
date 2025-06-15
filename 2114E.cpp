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
  vll vI(n);
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
  }
  vvi adj(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
    adj[v].pb(u);
  }
  vi vP(n + 1, 0);
  queue<int> q;
  q.push(1);
  vP[1] = 0;
  while (!q.empty()) {
    auto front = q.front();
    q.pop();
    for (auto i : adj[front]) {
      if (i == vP[front])
        continue;
      vP[i] = front;
      q.push(i);
    }
  }
  vll vMx(n + 1, 0);
  vll vMn(n + 1, 0);
  vMx[1] = vI[0];
  vMn[1] = vI[0];

  queue<int> q1;
  q1.push(1);
  while (!q1.empty()) {
    auto front = q1.front();
    q1.pop();
    for (auto i : adj[front]) {
      if (i == vP[front])
        continue;
      vMx[i] = max(vI[i - 1], vI[i - 1] - vMn[front]);
      vMn[i] = min(vI[i - 1], vI[i - 1] - vMx[front]);
      q1.push(i);
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << vMx[i];
    if (i < n)
      cout << ' ';
    else
      cout << '\n';
  }
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
