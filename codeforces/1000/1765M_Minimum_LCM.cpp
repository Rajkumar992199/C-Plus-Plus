#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = 1, b = n - 1;
        for (long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                a = n / i;
                b = n - a;
                break;
            }
        }
        cout << a << " " << b << endl;
    }
    return 0;
}