#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a <= b) cout << b << endl; // in first alarm sleep completed
        else {
            if (c <= d) cout << -1 << endl; // sleep will never completed
            else {
                long long rem, next, alarms;
                rem = a - b; // remaining time to sleep after first alarm
                next = c - d; // time polycarp get to sleep after reseting alarm
                alarms = rem / next + (rem % next != 0); // required count of alarms (excuding first alarm)
                cout <<  c * alarms + b << endl; // required time to complete sleep
            }
        }
    }
    return 0;
}