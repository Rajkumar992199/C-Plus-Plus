#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t , n , k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if(n % 2 == 0) cout << "YES" << endl;
        else {
            if(k % 2 == 0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
}