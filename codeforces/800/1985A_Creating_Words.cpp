#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string a,b;
    char c;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        c = b[0];
        b[0] = a[0];
        a[0] = c;
        cout << a << " " << b << endl;
    }
}