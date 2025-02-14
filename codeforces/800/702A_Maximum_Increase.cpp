#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n],max=0,count=1;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=1;i<n;i++) {
        if(a[i-1]<a[i]) count++;
        else count=1;
        if(count > max ) max = count;
    }
    cout << max;
}