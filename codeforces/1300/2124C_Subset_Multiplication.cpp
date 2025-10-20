#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        long long n, x = 1, temp;
        cin >> n;
        vector<long long> b(n);
        cin >> b[0];
        for (int i = 1; i < n; i++)
        {
            cin >> b[i];
            if(b[i] % b[i - 1]) {
                temp = ((b[i - 1] / __gcd(b[i - 1], b[i])) *  x);
                x = temp / __gcd(b[i - 1] / __gcd(b[i - 1], b[i]), x);
            }
        }
        cout << x << endl;
    }
}