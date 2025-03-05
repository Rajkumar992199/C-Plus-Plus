#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int sum = 0, a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for(int i = 0; i < k; i++) if(a[i] < b[n-i-1] ) swap(a[i], b[n-i-1]);
        for(int i = 0; i < n; i++) sum += a[i];
        cout << sum << endl;
    }
}