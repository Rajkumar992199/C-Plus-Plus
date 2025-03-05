#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, x, y, n;
    cin >> t;
    while(t--){
        cin >> x >> y >> n;
        long long sum;
        if(x > n) sum = y;
        else if (n % x < y) sum = (x)*((n / x) - 1) + y;
        else sum = x * (n / x) + y; 
        cout << sum << endl;
    }
}