#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,b,a[3];
    cin >> t;
    for(int j=0;j<t;j++){
        int k=0;
        for(int i=0;i<3;i++){
            cin >> a[i];
            if(i>0){
                if(a[i] != a[i-1]) {
                k++;
                b=i;
            }
            if(k==2) cout << a[1] << endl;
            else if (i==2 && b==1) cout << a[0] <<endl;
            else if (i==2 && b==2) cout << a[2] << endl;
            }
        }
    }
}