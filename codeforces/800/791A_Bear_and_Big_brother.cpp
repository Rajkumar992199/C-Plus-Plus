#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,y, z=0;
    cin >> x;
    cin >> y;
    while(x<=y){
        x = x*3;
        y = y*2;
        z++;
    }
    cout << z;
}