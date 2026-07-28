#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);   
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = a[n-1];
    int cur = a[n-1];
    for(int i = n-2; i >= 0; i--) {
        if(cur)
            cur = min(a[i], cur - 1);
        else
            break;

        ans += cur;
    }
    cout << ans;
    
    return 0;
}