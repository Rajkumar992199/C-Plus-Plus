#include<bits/stdc++.h>
using namespace std;

int main() {
    int x,z=0;
    cin >> x;
    char ch[x];
    for(int i=0;i<x;i++){
        cin >> ch[i];
        if(ch[i-1]==ch[i]) z++;
    }
    cout << z;
}