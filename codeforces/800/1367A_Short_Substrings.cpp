#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string b;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> b;
        int n= b.length();
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1) ;
            else i++;
            cout << b[i];
        }
        cout << endl;
    }
}