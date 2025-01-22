#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c1=0,c2=0,c3=0,k=s.length();
    for(int i=0;i<k;i=i+2){
        if(s[i] == '1' ) c1++;
        else if (s[i] == '2') c2++;
        else if (s[i] == '3') c3++;
    }
    for(int i=0;i<(k+1)/2;i++){
        if(i>0) cout << "+";
            if(c1>0) {
                cout << "1";
                c1--;
            }
            else if(c1==0 && c2>0){
                cout << "2" ;
                c2--;
            }
            else if(c2==0 && c3>0) {
                cout << "3";
                c3--;
            }
    }
}