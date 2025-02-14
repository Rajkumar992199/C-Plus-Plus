#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        char a[n];
        int max=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] > max) max = a[i];
        }
        cout << max-96 << endl;
    }
}