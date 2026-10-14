#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<long long> v(m + 1);
    long long soldier;
    for (int i = 0; i <= m; i++) 
        cin >> v[i];

    for (int i = 0; i < m; i++) {
        soldier = v[m] ^ v[i];
        bitset<32> bits(soldier);
        if(bits.count() <= k) 
            ans++; 
    }
    cout << ans;
    
    return 0;
}