#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,x,y;
    cin >> t;
    for(int i=0;i<t;i++){
        int k=0;
        cin >> x;
        y=x%10;
        if(x/10==0) k = (y-1)*10 + 1;
        else if(x/100==0) k = (y-1)*10 +3;
        else if(x/1000==0) k = (y-1)*10 +6;
        else k = y*10; 
        cout << k << endl;
    }
}