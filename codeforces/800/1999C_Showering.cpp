#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, s, m, start = 0, l, r;
        cin >> n >> s >> m;
        bool ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> l >> r;
            if(l - start >= s) 
                ans = 1;
            start = r;
        }
        if(m - r >= s) ans = 1;
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}