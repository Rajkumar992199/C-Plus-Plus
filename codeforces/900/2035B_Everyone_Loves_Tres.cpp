#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    long long t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        if(n == 1 || n == 3) 
            cout << -1 << endl;
        else if(n % 2 == 0){
            string s(n - 2, '3');
            s += "66";
            cout << s << endl;
        }
        else {
            string s(n - 4, '3');
            s += "6366";
            cout << s << endl;
        }
    }
    
    return 0;
}