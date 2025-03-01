#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,sum;
    cin >> t;
    while(t--) {
        cin >> n;
        int count = 0, max = n;
        string s;
        cin >> s;
        for(int i = 0; i < max/2; i++){
            if(s[i] != s[max-i-1]) {
                max = max--;
                n = n - 2;
            }
            else count++;
            if(count > 0) break;
        }
        cout << n << endl;
    }
}