#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  long long dash = count(s.begin(), s.end(), '-');
  long long under = n - dash;
  long long ans = (dash / 2) * (dash - dash / 2) * under;
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) 
    solve();
  return 0;
}