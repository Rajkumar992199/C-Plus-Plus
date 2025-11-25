#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n), b(n);
        a[0] = m;
        for(int i = 1; i < n; i++) 
            cin >> a[i];
        for(int i = 0; i < n; i++) 
            cin >> b[i];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        long long i = 0, j = 0;
        while(i < n && j < n) {
            if(a[i] < b[j]) i++, j++; // continue
            else j++; // operation
        }
        cout << j - i << endl; // ans
    }
    return 0;
}
