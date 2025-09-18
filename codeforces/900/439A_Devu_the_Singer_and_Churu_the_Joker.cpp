#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, sum = 0;
    cin >> n >> d;
    vector<int> t(n);
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        sum += t[i];
    }
    if(sum + 10 * (n - 1) <= d) cout << (d - sum) / 5;
    else cout << -1;
    return 0;
}