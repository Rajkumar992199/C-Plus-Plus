#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a.begin(), a.end());
    long long ans = a[n/2], cnt = 1, temp;
    for(int i = n/2; i < n-1; i++) {
        if(!k)
            break;
        if(a[i] == a[i+1])
            cnt++;
        else {
            temp = min(k/cnt, a[i+1]-a[i]);
            k -= temp*cnt;
            ans += temp;
            if(ans == a[i+1])
                cnt++;
            else
                break;
        }
    }
    ans += k/cnt;
    cout << ans << endl;

    return 0;
}