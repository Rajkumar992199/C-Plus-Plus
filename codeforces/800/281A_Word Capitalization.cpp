#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[1001];
    int k;
    for(int i=0; i<1001;i++){
        cin.get(a[i]);
        if(a[i]>='a' && a[i]<='z');
        else {
            if(a[i]>='A' && a[i]<='Z');
            else {
                k = i;
                break;
            }
        }
    }
    
    for(int i=0;i<k;i++){
        if(i==0) a[0] = (char) toupper(a[0]);
        cout << a[i];
    }
}