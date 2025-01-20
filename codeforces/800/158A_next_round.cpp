#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k,x;
    cin >> n;
    cin >> k;
    int a[n];
    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }
    if(a[k-1]>0){
        x = k;
        for(int i=k; i<n;i++){
        if (a[i-1] == a[i]){
        x++;
        }
        else{
            break;
        }
    }
    }
    else{
        x = 0;
        for(int i=0; i<k-1;i++){
            if(a[i]>0){
                x++;
            }
            else{
                break;
            }
        }
    }
    cout << x;
}