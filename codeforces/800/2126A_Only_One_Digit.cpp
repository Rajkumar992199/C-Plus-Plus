#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        string xs;
        xs = to_string(x);
        sort(xs.begin(), xs.end());
        cout << xs[0] << endl;
    }
    
}