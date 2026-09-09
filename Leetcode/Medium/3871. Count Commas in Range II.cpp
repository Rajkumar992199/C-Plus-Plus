#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string n;
    cin >> n;

    int len = n.size(), even = -1;

    for(int i = 0; i < len-1; i++) {
        if((n[i] - '0') % 2 == 0) {
            even = i;
            if(n[i] < n[len-1]) 
                break;
        }
    }

    if(even == -1) 
        cout << -1;
    else {
        swap(n[even], n[len-1]);
        cout << n;
    }

    return 0;
}