#include <bits/stdc++.h>
using namespace std;

bool check(long long ans) {
    int sum = 0;
    while(ans) {
        sum += ans % 10;
        ans /= 10;
    }
    if(sum == 10)
        return true;
    else
        return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long ans = 10;
    while(n) {
        ans += 9;
        if(check(ans)) 
            n--;
    }
    cout << ans;

    return 0;
}