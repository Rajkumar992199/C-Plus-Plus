#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;

    if(n % a == 0) {
        cout << "YES\n" << n / a << " " << 0;
        return 0;
    }
    else if(n % b == 0) {
        cout << "YES\n" << 0 << " " << n / b;
        return 0;
    }

    bool swap = 0;
    if(b > a) {
        b = a + b;
        a = b - a;
        b = b - a;
        swap = 1;
    }

    long long cnt1 = 0, cnt2 = 0;
    while(n >= b) {
        if (n % b == 0) {
            cnt2 = n / b;
            break;
        }
        else {
            cnt1++;
            n -= a;
        }
    }

    if(cnt2 == 0) {
        cout << "NO\n";
        return 0;
    }

    if(swap)
        cout << "YES\n" << cnt2 << " " << cnt1;
    else 
        cout << "YES\n" << cnt1 << " " << cnt2;

    return 0;
}

