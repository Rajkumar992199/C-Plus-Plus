#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, H, M, time, ans = 24 * 60;
        cin >> n >> H >> M;
        time = 60 * H + M;
        while(n--) {
            int h1, m1;
            cin >> h1 >> m1;
            int temp = 60 * h1 + m1 - time;
            if(temp < 0) temp += 24 * 60;
            ans = min(ans, temp);
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}
