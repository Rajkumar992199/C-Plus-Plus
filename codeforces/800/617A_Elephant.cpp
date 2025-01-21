#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,z=1;
    cin >> x;
    if(x>5){
        z = (x/5)+1;
        if(x%5==0){
            z--;
        }
    }
    cout << z;
}