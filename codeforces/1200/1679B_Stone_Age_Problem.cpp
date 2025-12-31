#include <bits/stdc++.h>
using namespace std;

pair<int, int> global_val = {0, -1};

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    long long sum = 0;
    vector<pair<long long, int>> pair(n); 
    for(int i = 0; i < n; i++) {
        cin >> pair[i].first;
        pair[i].second = 0;
        sum += pair[i].first;
    }
    int t, x, y;
    for(int i = 0; i < q; i++) {
        cin >> t;
        if(t == 1) {
            cin >> x >> y;
            x--;
            if(global_val.second < pair[x].second) 
                sum += y - pair[x].first;
            else 
                sum += y - global_val.first;
            pair[x].first = y;
            pair[x].second = i;
        }
        else {
            cin >> x;
            global_val.first = x;
            global_val.second = i;
            sum = 1ll * n * x;
        }
        cout << sum << endl;
    }
    return 0;
}
