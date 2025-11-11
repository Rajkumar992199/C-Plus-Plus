#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b, k;
  cin >> a >> b >> k;
  long long x = __gcd(a, b);
  
  // (a / x = dx) & (b / x = dy) => 1 step only (a/x, b/x) repeatively
  if(a / x <= k && b / x <= k) 
    cout << 1 << endl;
  else // 2 steps (as many times)=> (1, 1) repeatively then either (1, 0) or (0, 1)
    cout << 2 << endl; 
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) 
      solve();

    return 0;
}
