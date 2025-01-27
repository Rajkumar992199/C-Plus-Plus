#include<bits/stdc++.h>
using namespace std;

int main() {
    int s[4],maximum;
    for(int i=0;i<4;i++){
        cin >> s[i];
    }
    maximum = max(max(s[0],s[1]),max(s[2],s[3]));
    for(int i=4;i>0;i--){
        if(maximum-s[i-1]>0) cout << maximum-s[i-1] << " ";
    }
}