#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        char s[n];
        int x=0,y=0,count=0;
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i] == 'U') y++;
            else if(s[i] == 'D') y--;
            else if(s[i] == 'L') x--;
            else x++;
            if(x==1 && y==1) {
                cout << "YES" << endl;
                count++;
                break;
            }
        }
        if(count==0) cout << "NO" << endl;
    }
}