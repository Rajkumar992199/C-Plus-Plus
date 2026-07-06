#include<bits/stdc++.h>
using namespace std;

int main(){
    double h, l;
    cin >> h >> l;
    cout << fixed << setprecision(13) << (l*l - h*h) / (2*h);
}