#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x=0,y=0;
    cin >> n ;
    char ch[n];
    for(int i=0;i<n;i++){
        cin >> ch[i];
        if(ch[i]=='A') x++;
        else y++;
    }
    if(x==y) cout << "Friendship";
    else if(x>y) cout << "Anton";
    else cout << "Danik";
}