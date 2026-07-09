#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt = 0;
    cin >> n;
 
    vector<long long> a(n);
    long long sum = 0, temp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        cnt += (a[i] % 2);
        temp = sum - cnt/3;
        if(i)
            cout << temp - (temp % 2) << " ";
        else 
            cout << sum << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) 
        solve();
 
    return 0;
}