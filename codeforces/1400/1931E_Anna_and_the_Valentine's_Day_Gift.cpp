#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long n, m, digits = 0;
        cin >> n >> m;
        // numbers, count of zero in each number
        vector<long long> a(n), zeros;
        for(int i = 0; i < n; i++) {
            int flag = 0;
            cin >> a[i];
            int zero = 0;
            while(a[i]) {
                // if flag = 1 and then 0 comes, means intermediate 0 (nothing will change after turn)
                if(a[i] % 10 == 0 && !flag) zero++;
                else flag = 1;
                a[i] /= 10;
                digits++;
            }
            zeros.push_back(zero);
        }

        sort(zeros.rbegin(), zeros.rend());
        for(int i = 0; i < zeros.size(); i++) {
            // anna will reverse the element with largest zero
            // sasha will try to prevent it
            if(i % 2 == 0) digits -= zeros[i];
        }
        // 10^m has m + 1 digits so digits must be greater than m
        if(digits > m) cout << "Sasha" << endl;
        else cout << "Anna" << endl;
    }
    return 0;
}
