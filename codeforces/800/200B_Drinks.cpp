#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,p;
    double f,t=0.0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> p;
        t += p;
    }
    f = t/n;
    cout << fixed << setprecision(12) << f;
}