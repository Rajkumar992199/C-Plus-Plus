#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> pre, post;

    long long i;
    for(i = 1; i*i < n; i++) {
        if(n % i == 0) 
            pre.push_back(i);
    }

    int sq = 0;
    if(i*i == n) {
        sq = 1;
        pre.push_back(i);
    }
    
    if(k <= pre.size())
        cout << pre[k-1];
    else if(2*pre.size()-sq >= k)
        cout << n/pre[2*pre.size()-k-sq];
    else 
        cout << -1;

    return 0;
}