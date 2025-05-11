#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum = 0, a[n], x;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        x = sqrt(sum);
        if(sum == (x*x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}