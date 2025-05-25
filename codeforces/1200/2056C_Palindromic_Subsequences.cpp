#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        cout << "1 ";
        for (int j = 2; j <= n-2; j++) cout << j-1 << " ";
        cout << "1 2 " << endl;
    }
}