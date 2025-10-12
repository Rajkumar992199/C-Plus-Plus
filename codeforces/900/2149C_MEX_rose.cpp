#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n, k, c = 0, ans = 0;
    cin >> n >> k;
    vector<bool> a(k, 0); // checking presence of numbers 0 to k - 1
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if(x < k) a[x] = 1;
        else if(x == k) c++; // for mex there shouldn't be k
    }
    for(int i = 0; i < k; i++)
        if(!a[i]) ans++; // if not present mex will be changed so ans++
    cout << max(ans, c) << endl;   
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}
