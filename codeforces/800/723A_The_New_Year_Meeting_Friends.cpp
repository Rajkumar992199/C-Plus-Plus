#include<bits/stdc++.h>
using namespace std;

int main() {
    int x[3],avg,max=0,min=10000;
    for(int i=0;i<3;i++){
        cin >> x[i];
        if(x[i]>max) max = x[i];
        if(x[i]<min) min = x[i];
    }
    cout << max-min;
}