#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, a[3];
    cin >> t;
    while (t--) {
        set<long long> s;
        for(int i = 0; i < 3; i++) cin >> a[i];
        s.insert(a[0]); 
        s.insert(a[1]);
        s.insert(a[2]);
        if (s.size() == 3) cout << "NO" << endl;
        else {
            if (s.size() == 1) {
                cout << "YES" << endl;
                for(int i = 0; i < 3; i++) cout << a[i] << " ";
                cout << endl;
            }
            else {
                sort(a , a+3);
                if(a[0] == a[1]) cout << "NO" << endl;
                else cout << "YES" << endl << a[0] << " " << a[0] << " " << a[1] << endl;
            }
        }
    }
}