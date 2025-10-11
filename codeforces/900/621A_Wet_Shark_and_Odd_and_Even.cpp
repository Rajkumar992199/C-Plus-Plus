#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum = 0, temp = 0; 
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];
    sort(v.rbegin(), v.rend());
    for(int i = 0; i < n; i++) {
        if(v[i] % 2 == 0) sum += v[i];
        else temp += v[i];
        if(temp % 2 == 0) {
            sum += temp;
            temp = 0;
        }
    }
    cout << sum;
    return 0;
}