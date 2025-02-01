#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        if(n%3==0) cout<< "second" << endl;
        else cout << "First" << endl;
    }
}