#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    int cnt = 0;
    if(n == k){
        cout << 0 << endl;
        return;
    }
    while(n > k){
        cnt++;
        if(n / 2 == k || ((n / 2) + (n % 2)) == k){
            cout << cnt << endl;
            return;
        }
        else{
            if((n / 2) % 2 == 1) 
                n /= 2;
            else 
                n = (n / 2) + (n % 2);
       }
    }

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}