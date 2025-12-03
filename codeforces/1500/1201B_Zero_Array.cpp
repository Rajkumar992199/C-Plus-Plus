#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    long long n, a, sum = 0, mx = 0;
    cin >> n;
    while(n--) {
        cin >> a;
        sum += a;
        mx = max(mx, a);
    } 
    if(sum % 2 == 0 && mx * 2 <= sum) 
        cout << "YES\n";
    else cout << "NO\n";
}