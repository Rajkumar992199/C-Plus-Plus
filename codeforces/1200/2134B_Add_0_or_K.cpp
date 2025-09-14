#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t = 1;
    cin >> t;
    while(t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (a[i] % (k + 1)) * k;
        }
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}