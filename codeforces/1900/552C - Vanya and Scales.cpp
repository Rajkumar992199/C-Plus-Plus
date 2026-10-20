#include <bits/stdc++.h>  
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, m;
    cin >> w >> m;

    while(m >= 1){
        long long r = m%w;
      
        if(r == 0 || r == 1 )
            m = (m-r)/w;
        else if(r == w-1)
            m = (m+1)/w;
        else {
            cout << "NO" ;
            return 0;
        }
    }
    cout << "YES";
    
    return 0;
}