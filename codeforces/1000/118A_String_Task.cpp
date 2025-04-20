#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,a="AEIOUYaeiouy";
    cin >> s;
    for(int i=0;i<s.length();i++){
        int k=0;
        for(int j=0;j<12;j++){
            if(s[i]==a[j]){
                k++;
                break;
            }
        }
        if(k==1) continue;
        else cout << "."<< (char) tolower(s[i]);
    }
}