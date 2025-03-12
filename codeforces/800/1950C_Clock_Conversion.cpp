#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, s1;
        cin >> s;
        if((s[0] == '0' && s[1] != '0') || (s[0] == '1' && s[1] < '2')) cout << s << " AM" << endl;
        else if (s[0] == '0' && s[1] == '0') cout << 12 << s.substr(2,5) << " AM" << endl;
        else if (s[0] == '1' && s[1] == '2') cout << 12 << s.substr(2,5) << " PM" << endl;
        else {
            s1 = s.substr(0,2);
            int n = stoi(s1);
            n -= 12;
            if(n < 10) cout << "0" << n << s.substr(2,5) << " PM" << endl;
            else cout <<  n << s.substr(2,5) << " PM" << endl;
        }
    }
}