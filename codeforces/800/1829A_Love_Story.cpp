#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s,a="codeforces";
    for(int i=0;i<t;i++){
        int k=0;
        cin >> s;
        for(int j=0;j<10;j++) if(s[j]!=a[j]) k++;
        cout << k << endl;
    }
}