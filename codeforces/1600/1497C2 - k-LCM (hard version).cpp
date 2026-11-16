#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    for (long long i = 0; i < k-3; i++) 
        cout << 1 << ' ';

    long long m = n-(k-3);
    if (m % 2 == 1) 
        cout << 1 << ' ' << (m-1)/2 << ' ' << (m-1)/2;
    else if (m % 4 == 2) 
        cout << 2 << ' ' << (m-2)/2 << ' ' << (m-2)/2;
    else 
        cout << m/2 << ' ' << m/4 << ' ' << m/4;
        
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}