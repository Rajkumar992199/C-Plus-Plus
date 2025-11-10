#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    long long n, a, sum = 0, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      a += x;
      x = max(x, a);
      cout << a << ' ';
    }
    return 0;
}
