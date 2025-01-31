#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    char c;
    string s= "codeforces";
    for(int i=0;i<t;i++){
        cin >> c;
        for(int j=0;j<10;j++){
            if(s[j]==c) {
                cout<<"YES" << endl;
                break;
            }
            else if(j==9){
                cout << "NO" << endl;
            }
        }
    }
}