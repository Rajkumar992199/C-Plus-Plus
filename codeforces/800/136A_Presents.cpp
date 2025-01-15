#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n],a[n];
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++) a[p[i]-1]= i+1;
    for(int i=0;i<n;i++) cout << a[i] << " ";
}