#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, r, b;
        cin >> n >> r >> b;
        string s;
        int red = r / (b + 1), rem = r % (b + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < red; j++) s += 'R', i++;
            if (rem > 0) {
                s += 'R';
                rem--, i++;
            }
            if (i < n) s += 'B';
        }
        cout << s << endl;
    }
    return 0;
}
