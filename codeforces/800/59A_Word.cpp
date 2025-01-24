#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c1=0,c2=0,k=s.length();
    for(int i=0;i<k;i++){
        if(s[i] >= 'a' && s[i] <= 'z' ) c1++;
        else if (s[i] >= 'A' && s[i] <= 'Z' ) c2++;
    }
    if(c1>=c2) {
        for(int i=0;i<k;i++){
            s[i] = (char) tolower(s[i]);
        }
    }
    else {
        for(int i=0;i<k;i++){
            s[i] = (char) toupper(s[i]);
        }
    }
    cout << s;
}
