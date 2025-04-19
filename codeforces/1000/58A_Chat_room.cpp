#include<bits/stdc++.h>
using namespace std;

int main() {
    int s1=0,j=0;
    string s,a="hello";
    cin >> s;
    for(int i=0;i<s.length();i++){
            if(s[i]==a[j]){
            s1++;
            j++;
            }
            if(s1==5) {
                cout << "YES";
                break;
            }
            else if(i== s.length()-1) {
                cout << "NO";
                break;
            }
    }
}