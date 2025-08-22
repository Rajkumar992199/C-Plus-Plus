#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        pair<long long,long long> ab[n];
        for(long long i = 0;i < n;++i)
            cin >> ab[i].first;
        for(long long i = 0;i < n;++i)
            cin >> ab[i].second;
        sort(ab, ab + n);
        for(long long i = 0;i < n;++i)
            cout << ab[i].first << ' ';
        cout << endl;
        for(long long i = 0;i < n;++i)
            cout << ab[i].second << ' ';
        cout << endl;
    }
    return 0;
}