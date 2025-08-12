#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) {
        int a, b; // a is no. of one's and b is no. of two's
        cin >> a >> b; 
        if(a % 2 == 0) { // if no. of one's are odd then sum 0 is not possible
            if (b % 2 == 0) cout << "YES\n"; // if no. of both one's and two's are even then half of them will be + and others will be -
            else {
                if (a > 0) cout << "YES\n"; // if no. of two's are odd then 2 one's will neglact the 1 two
                else cout << "NO\n"; // else no answer
            }
        }
        else cout << "NO\n"; // in all other cases answer is no
    }
    return 0;
}
