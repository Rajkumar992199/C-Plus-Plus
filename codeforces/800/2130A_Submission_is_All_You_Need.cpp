#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        long long n, tmp, ans = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp; 
            ans += tmp + (tmp == 0);
        }
        cout << ans << endl;
    }
    return 0;
}