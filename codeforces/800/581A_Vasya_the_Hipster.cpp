#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b,m;
    cin >> a >> b;
    m= min(a,b);
    cout << m << " ";
    a -= m;
    b -= m;
    a = a+b;
    cout << a/2;
}