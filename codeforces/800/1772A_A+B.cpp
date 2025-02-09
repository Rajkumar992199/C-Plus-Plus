#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,b,sum;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        a= s[0];
        b= s[2];
        sum = a+b;
        cout << sum-96 << endl;
    }
}