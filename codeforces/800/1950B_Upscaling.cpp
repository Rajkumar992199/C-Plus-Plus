#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            for (int k = 0; k < 2; k++) {
                for(int j = 0; j < n; j++) {
                    if(i % 2 == 0) { 
                        if(j % 2 == 0) cout << "##";
                        else cout << "..";
                    }
                    else {
                        if(j % 2 == 0) cout << "..";
                        else cout << "##";
                    }
                }
            cout << endl;
            }
        }
    }
}