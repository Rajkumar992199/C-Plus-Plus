#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mx = 1;
    
    for (int k = 1; ; k++) {
        long long beautiful = (1LL << k) - 1;
        beautiful *= (1LL << (k - 1));
        
        if (beautiful > n) 
            break;
        
        if (n % beautiful == 0) 
            mx = (int)beautiful;
    }
    
    cout << mx << endl;

    return 0;
}

