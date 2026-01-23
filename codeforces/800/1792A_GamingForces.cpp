#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, cnt1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      cnt1 += (x == 1);
    }
    cout << n - cnt1 / 2 << endl;
  }
}