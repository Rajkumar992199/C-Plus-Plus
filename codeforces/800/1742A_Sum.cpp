#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[3];
    for(int i=0;i<n;i++){
        int sum=0,k=0;
        for(int j=0;j<3;j++){
        cin >> a[j];
        sum += a[j];
        }
        for(int j=0;j<3;j++){
            if(sum== 2*a[j]){
                cout <<"YES" << endl;
                break;
            }
            else k++;
            if(k==3) cout << "NO" << endl;
        }
    }
}