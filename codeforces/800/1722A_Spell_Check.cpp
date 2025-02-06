#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,a="Timur";
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> s;
        int x=0;
        if(n != 5) {
            cout << "NO" << endl;
            continue;
        }
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                if(s[k]==a[j]){
                    x++;
                    break;
                }
            }
        }
        if(x==5) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}