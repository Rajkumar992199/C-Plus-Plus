#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> div = {2,3,5};
    for(auto it : div) {
        while(a%it == 0 && b%it == 0) {
            a /= it;
            b /= it;
        }
    }

    int ans = 0;

    for(auto it : div) {
        while(a%it == 0) {
            a /= it;
            ans++;
        }
    }
    
    for(auto it : div) {
        while(b%it == 0) {
            b /= it;
            ans++;
        }
    }

    if(a != b)
        cout << -1 << '\n';
    else 
        cout << ans << '\n';
    
    return 0;
}