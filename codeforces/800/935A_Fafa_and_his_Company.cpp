#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 2, ans = 1;
    cin >> n;
    while(i <= n/2) {
        if(n % i == 0) ans++;
        i++;
    }
    cout << ans;
}