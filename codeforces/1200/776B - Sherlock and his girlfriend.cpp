#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> isPrime(n + 2, true);
    
    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= n + 1; p++) 
        if (isPrime[p]) 
            for (int i = p * p; i <= n + 1; i += p) 
                isPrime[i] = false;

    if(n > 2)
        cout << 2 << endl;
    else
        cout << 1 << endl;

    for (int i = 2; i <= n + 1; i++) {
        if (isPrime[i]) 
            cout << "1 ";
        else
            cout << "2 "; 
    }
    cout << endl;
}