#include<bits/stdc++.h>
using namespace std;

int main() {
    int j,x=0;
    long long n;
    cin >> n;
    for(int i=0;i<20;i++){
        j =n%10;
        if(j==7 || j==4) x++;
        n = n/10;
        if(n==0) break;
    }
    if(x==4 || x==7) cout << "YES";
    else{
    cout << "NO";
    }
}