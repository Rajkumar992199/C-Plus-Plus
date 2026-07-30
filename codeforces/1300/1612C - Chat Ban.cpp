#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long k, x;
    cin >> k >> x;
    long long first = (k * (k+1)) / 2;
    
    if(x <= first) {
        long long l = 1, r = k;
        while(l < r) {
            long long mid = (l+r) / 2;
            long long temp = (mid*(mid+1)) / 2;
            if(temp < x)
                l = mid + 1;
            else
                r = mid;
        }
        cout << r << "\n";
    }
    else {
        x -= first;
        long long r = k - 1, l = 1;
        if((r*(r+1)) / 2 <= x) {
            cout << 2 * k - 1 << "\n";
            return;
        }
        while(l < r) {
            long long mid = (l+r) / 2;
            long long temp = (mid*(2 * k - mid - 1)) / 2;
            if(temp < x)
                l = mid + 1;
            else
                r = mid;
        }
        cout << k + l << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();
}