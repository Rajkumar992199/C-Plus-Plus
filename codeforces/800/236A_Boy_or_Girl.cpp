#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[100];
    int k,n=0;
    for(int i=0; i<100;i++){
        cin.get(a[i]);
        if(a[i]>='a' && a[i]<='z');
        else {
            if(a[i]>='A' && a[i]<='Z');
            else {
                k = i;
                break;
            }
        }
        int c=0;
        for(int j=0; j<i;j++){
            if(a[j]==a[i]){
                c =1;
                break;
            }
        }
        if(c==0){
            n++;
        }
    }
    if(n%2==0) cout << "CHAT WITH HER!";
    else cout <<"IGNORE HIM!";
}