#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, m;
    cin >> n >> m;
    
    long long fst, cur, g = 0;
    cin >> fst; 
    for(int i = 1; i < n; i++) {
        cin >> cur;
        g = __gcd(g, abs(cur - fst));
    }
    long long x;
    for (int i = 0; i < m; i++) {
        cin >> x;
        cout << __gcd(g, fst+x) << ' ';
    }

    return 0;
}