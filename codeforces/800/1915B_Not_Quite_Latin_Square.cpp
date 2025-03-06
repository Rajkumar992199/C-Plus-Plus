#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        char s[3][3];
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++){
            cin >> s[i][j];
            if(s[i][j] == 'A') sum += 1;
            else if(s[i][j] == 'B') sum += 2;
            else if(s[i][j] == 'C') sum += 3;
            }
        }
        if(sum == 17) cout << "A" << endl;
        else if(sum == 16) cout << "B" << endl;
        else if(sum == 15) cout << "C" << endl;
    }
}