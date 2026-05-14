#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> p(n + 1, 0), cnt(2, 0);
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
         cin >> p[i]; 
         sum += p[i];
         cnt[i % 2] += p[i];
    }

    if(cnt[1] <= sum / 2) {
        for(int i = 1;i <= n;i ++){
            if(i % 2) 
                cout << 1 << " ";
            else 
                cout << p[i] << " ";
        }
        cout << endl;
    }
    else {
        for(int i = 1;i <= n;i ++) {
            if(i % 2 == 0) 
                cout << 1 << " ";
            else 
                cout << p[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);

    int t; 
    cin >> t;
    while(t--) 
        solve();

    return 0;
}