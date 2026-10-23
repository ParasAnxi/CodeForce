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
#define INF 1e18
void solve() {
  int a, b;
  ll x, y;
  if (!(cin >> a >> b >> x >> y)) return;
  vll dist(205, INF);
  priority_queue<pair<ll, int>, vector<pair<ll, int>>,greater<pair<ll, int>>> pq;
  dist[a] = 0;
  pq.push({0, a});
  while (!pq.empty()) {
    ll d = pq.top().first;
    int u = pq.top().second;
    pq.pop();
    if (d > dist[u])
      continue;
    if (u == b)
      break;
    if (u + 1 <= 200) {
      if (dist[u + 1] > d + x) {
        dist[u + 1] = d + x;
        pq.push({dist[u + 1], u + 1});
      }
    }
    int v = u ^ 1;
    if (v <= 200) {
      if (dist[v] > d + y) {
        dist[v] = d + y;
        pq.push({dist[v], v});
      }
    }
  }
  if (dist[b] >= INF) {
    cout << -1 << "\n";
  } else {
    cout << dist[b] << "\n";
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