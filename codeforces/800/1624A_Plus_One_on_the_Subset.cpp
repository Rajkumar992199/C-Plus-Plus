#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        long long a[n],max=0,min=1000000000;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if(a[j]>max) max = a[j];
            if(a[j]<min) min = a[j];
        }
        cout << max - min << endl;
    }
}