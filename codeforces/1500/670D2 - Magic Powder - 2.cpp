#include<bits/stdc++.h>
using namespace std;

bool solve(long long x, vector<int>& need, vector<int>& have, int n, long long k) {
    long long used = 0;
    for (int i = 0; i < n; i++) {
        long long req = x*need[i];  
        if (req > have[i]) {
            used += req-have[i];
            if (used > k) 
                return false; 
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<int> need(n), have(n);

    for(int i = 0; i < n; i++) 
        cin >> need[i];
    for(int i = 0; i < n; i++) 
        cin >> have[i];
    
    long long lo = 0, hi = 2000000000LL;
    while (lo < hi) {
        long long mid = (hi+lo+1) / 2;
        if (solve(mid, need, have, n, k)) 
            lo = mid;
        else 
            hi = mid-1;
    }
    cout << lo << '\n';

    return 0;
}