#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cin >> i;
    int a[i][3];
    int y = 0;
    for(int j = 0; j < i; j++){
        int k = 0;
    for(int x=0; x<3; x++) {
        cin >> a[j][x]; 
        k += a[j][x];
        }
        if (k >1){
            y = y+1;
        }
    }
    cout << y;
}