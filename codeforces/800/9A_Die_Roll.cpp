#include<bits/stdc++.h>
using namespace std;

int main() {
    int y,w,d;
        cin >> y >> w;
        d = 7 - max(y,w);
        if(d==1) cout << "1/6";
        else if(d==2) cout << "1/3";
        else if(d==3) cout << "1/2";
        else if(d==4) cout << "2/3";
        else if(d==5) cout << "5/6";
        else cout<< "1/1";
}