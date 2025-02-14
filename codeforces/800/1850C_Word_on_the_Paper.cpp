#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        char a[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
            cin >> a[i][j];
            if(a[i][j] != '.') n = j;
        }
        }
        for(int i=0;i<8;i++){
            if(a[i][n]!='.') cout << a[i][n];
        }
        cout << endl;
    }
}