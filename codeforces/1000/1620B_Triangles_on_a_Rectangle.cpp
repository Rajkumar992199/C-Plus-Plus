#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long w, h, area = INT_MIN;
        cin >> w >> h;
        for (int i = 0; i < 4; i++){
            long long k, first, last;
            cin >> k;
            for (int j = 0; j < k; j++) {
                long long x;
                cin >> x;
                if (j == 0) first = x;
                if (j == k - 1) last = x;
            }
            long long base = last - first, height;
            if (i <= 1) height = h;
            else height = w;
            area = max(area, base * height);
        }
        cout << area << endl;
    }
    return 0;
}
