#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,sum;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n],count=0,max=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0) {
                count++;
                if(count>max) max = count;
            }
            else count = 0;
        }
        cout << max << endl;
    }
}