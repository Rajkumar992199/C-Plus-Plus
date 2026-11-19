#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int cnt = 0;
    long long prod = 1;
    vector<bool> ans(n, false);
    for (int i = 1; i < n; i++) {
        if (__gcd(n,i) == 1) {
            cnt++;
            ans[i] = true;
            prod = (prod*i) % n;
        }
    }

    if(prod != 1) {
        ans[prod] = false;
        cnt--;
    }

    cout << cnt << '\n';
    for (int i = 1; i < n; i++) {
        if (ans[i])
            cout << i << " ";
    }
}