#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,side=0;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="Tetrahedron") side += 4;
        else if (s=="Cube") side += 6;
        else if (s=="Octahedron") side += 8;
        else if (s=="Dodecahedron") side += 12;
        else  side += 20;
    }
    cout << side;
}