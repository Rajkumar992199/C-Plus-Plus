#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, c25 = 0, c50 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> m;
        if(m == 25) 
            c25++;
        else if(m == 50) {
            if(!c25) {
                cout << "NO\n";
                return 0; 
            } 
            c25--;
            c50++;
        }
        else {
            if(c25 < 3 && (!c25 || !c50)) {
                cout << "NO\n";
                return 0; 
            } 
            if(c50) {
                c50--;
                c25--;
            }
            else 
                c25 -= 3;
        }
    }
    cout << "YES\n";
    return 0;
}
