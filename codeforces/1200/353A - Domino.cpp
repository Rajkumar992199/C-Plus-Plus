#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, y, sumx = 0, sumy = 0;
    cin >> n;

    bool rotate = false;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        sumx += x;
        sumy += y;

        if((x+y)%2)
            rotate = true;
    }
    sumx %= 2;
    sumy %= 2;

    if(!sumx && !sumy)
        cout << 0;
    else if(sumx && sumy && rotate)
        cout << 1;
    else
        cout << -1;

    return 0;
}