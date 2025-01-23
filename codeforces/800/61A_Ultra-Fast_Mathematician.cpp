#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int k=s1.length();
    for(int i=0;i<k;i++){
        if(s1[i] == s2[i]) cout << "0";
        else cout << "1";
    }
}