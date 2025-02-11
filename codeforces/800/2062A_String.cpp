#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int sum=0;
        cin >> s;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='1') sum++;
        }
        cout << sum << endl;
    }
}