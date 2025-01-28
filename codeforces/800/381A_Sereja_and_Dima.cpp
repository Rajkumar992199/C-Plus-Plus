#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c[n], k=0,s[2];
    s[0]=0,s[1]=0;
    for (int i=0;i<n;i++) cin >> c[i];
    for (int i=0; i<n;i++){
        int m = max(c[i],c[n-1]);
        if (k%2==0) s[0] += m;
        else s[1] +=m;
        if(m!=c[i]){
            i--;
            n--;
        }
        k++;
    }
    cout << s[0] << " " << s[1];
}