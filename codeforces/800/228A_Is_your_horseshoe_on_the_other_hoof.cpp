#include<bits/stdc++.h>
using namespace std;

int main() {
    int h[4],k=0;
    for(int i=0;i<4;i++) {
        cin >> h[i];
        for(int j=0;j<i;j++){
            if(h[i]==h[j]){
                k++;
                break;
            }
        }
    }
    cout << k;
}