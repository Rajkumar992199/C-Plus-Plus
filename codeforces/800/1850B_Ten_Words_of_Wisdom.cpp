#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int k = 0,l = 0, max = 0, a, b;
        for(int i = 0; i < n; i++) {
            cin >> a >> b;
            if((a <= 10 && max < b) ) {
                    max = b;
                    k = i + 1;
                }
            }
        cout << k << endl;
    }
}