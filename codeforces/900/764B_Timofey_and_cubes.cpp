#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); 
  cin.tie(0);
    
  int n;
    cin >> n;
    vector <int> a(n);
    int x = 0;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    for(int i = 0; i < n / 2; i++) {
        if(i % 2)
            continue;
        swap(a[i], a[n - 1 - i]);
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}