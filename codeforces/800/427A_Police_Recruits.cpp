#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, p = 0, u = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        if(x==-1)
            if(p==0) u++;
            else p--;
        else
            p += x;
    }
    cout << u;
}