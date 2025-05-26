#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) if ( (a[i-1] - a[i]) % 2 != 0) {
        if ( ((a[i] - a[i + 1]) % 2 != 0 )|| (i == n - 1 )) cout << i + 1;
        else cout << i;
        break;
    }
}