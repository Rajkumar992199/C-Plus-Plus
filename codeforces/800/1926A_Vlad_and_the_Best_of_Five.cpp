#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    for(int i=0;i<t;i++) {
        cin >> s;
        int count=0;
        for(int j=0;j<5;j++) if(s[j]=='A') count++;
        if(count>2) cout << "A" << endl;
        else cout << "B" << endl;
    }
}