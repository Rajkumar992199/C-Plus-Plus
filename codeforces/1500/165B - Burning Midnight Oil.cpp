#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, ans = 0;
    cin >> n;

    while(n) {
        ans += n;
        n /= 2;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int l = 1, r = n;
    while(l < r) {
        int mid = (l+r)/2;
        int v = mid, num = n-v;
        while(v != 0 && num > 0){
            v /= k;
            num -= v;
        }
        
        if(num > 0)
            l = mid+1;
        else
            r = mid;
    }
    
    cout << r;
    return 0;
}