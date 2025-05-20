#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        switch (a) {
            case 60 : case 90 : case 108 : case 120 : case 135 : case 140 : case 144 : 
            case 150 : case 156 : case 160 : case 162 : case 165 : case 168 : case 170 : 
            case 171 : case 172 : case 174 : case 175 : case 176 : case 177 : case 178 :
            case 179 : cout << "YES\n"; // if any of above case is true then will print true;
                    break;
            default : cout << "NO\n"; // else print no
        }
    }
    return 0;
}
