#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,a[5];
    cin >> n ;
    for(int i=0;i<n;i++){
        int j=0;
        cin >> m;
        for(int k=0;k<5;k++){
            if(m%10!=0){
                a[j]=m%10*(pow(10,k));
                if(k>0&&a[j]%10!=0) a[j]=m%10*(pow(10,k))+1;
                j++;
                if(m==0) break;
            }
            m = m/10;
        }
        cout << j << endl;
        for(int k=0;k<j;k++) cout << a[k] << " ";
        cout << endl;
    }
}