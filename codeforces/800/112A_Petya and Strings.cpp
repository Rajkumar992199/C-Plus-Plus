#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int d=0,k = s1.length();
    for(int i=0;i<k;i++){
        if(s1[i] != s2[i]){
        s1[i] = (char) toupper(s1[i]);
        s2[i] = (char) toupper(s2[i]);
        if(s1[i] != s2[i]){
            if(s1[i]>s2[i]) d++ ;
            else if(s1[i]<s2[i]) d--;
        }
    }
    }
    if(d>0) cout << "1";
    else if(d<0) cout << "-1";
    else cout << "0";
}