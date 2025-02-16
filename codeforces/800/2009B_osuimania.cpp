#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        char a[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin >> a[i][j]; 
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                if(a[n-i-1][j]=='#') cout << j+1 << " "; 
            }
        }
        cout << endl;
    }
}