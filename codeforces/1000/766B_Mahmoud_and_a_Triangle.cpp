#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 2; i++) {
        if(a[i] + a[i + 1] > a[i + 2]) {
            ans = 1;
            break;
        }
    }
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}