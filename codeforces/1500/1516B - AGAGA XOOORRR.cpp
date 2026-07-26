#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long x = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        x ^= a[i];
    }
    string s= "YES\n";
    if(x != 0){
        s = "NO\n";
        bool sx = false;
        long long p = 0;
        for(int i = 0; i < n-1; i++){
            p ^= a[i];
            if(p == 0 && sx) {
                s="YES\n";
                break;
            }
            if(p == x)
                sx=true;
        }
    }
    cout << s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}