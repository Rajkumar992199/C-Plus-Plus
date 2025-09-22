#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == 'U') count++;
        if(count%2 != 0) cout << "YES" << endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
    