#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int s[n],min=1000,x;
        for (int i=0;i<n;i++) cin >> s[i];
        for (int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                x= abs(s[j]-s[i]);
                if (min>x) min=x;
                if(min==0) break;
            }
            if(min==0) break;
        }
        cout << min << endl;
    }
}