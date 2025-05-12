#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
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
using umci = unordered_map<char, int>;
#define pb push_back
#define MOD 1000000007
#define LMOD 1000000000000000007LL
int main() {
  int n;
  cin >> n;
  vi vI(n);
  for (int i = 0; i < n; i++) {
    cin >> vI[i];
  }
  int mini = INT_MAX;
  for (int i = 0; i < n; i++) {
    mini = min(mini, vI[i]);
  }
  if (mini < 0)
    cout << mini * (-1) << endl;
  else
    cout << mini << endl;
}