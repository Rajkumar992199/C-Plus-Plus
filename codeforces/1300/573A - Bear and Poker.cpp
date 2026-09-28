#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<int> a(n);
    int g = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }

    while(g % 2 == 0)
        g /= 2;
    while(g % 3 == 0)
        g /= 3;

    for(int i = 0; i < n; i++) {
        while(a[i] % 2 == 0)
            a[i] /= 2;
        while(a[i] % 3 == 0)
            a[i] /= 3;
        if(a[i] != g) {
            cout << "No\n";
            return 0;
        }
    }

    cout << "Yes\n";
    return 0;
}