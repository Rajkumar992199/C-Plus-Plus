#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

	long long n, k; 
    cin >> n >> k;

    long long one = __builtin_popcount(n);
    if(k > n || k < one) {
        cout << "NO\n";
        return 0;
    }
    else if(k == n){
        cout << "YES\n";
        while(n--)
            cout << 1 << " ";
        return 0;
    }
    
    long long lg = log2(n), temp = n;
    vector<long long> v;

    for(int i = 0; i < 31; i++) {
        if(n & (1 << i))
            v.push_back(1 << i);
    }

    long long cnt = k - one, i = 0;

    while(cnt--) {
        if(v[i] == 1) {
            i++;
            cnt++;
        }
        else {
            v[i] = v[i] / 2;
            v.push_back(v[i]);
        }
    }

    cout << "YES\n";
    for(auto it : v)
        cout << it << " ";
    cout << endl;
    return 0;
}
