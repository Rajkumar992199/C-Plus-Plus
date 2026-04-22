#include <bits/stdc++.h>
using namespace std;

pair<int,int> lower(deque<int> a, int k){
    int low = 50000, idx;
    for(int i = 0;i <= k; i++){
        if(a[i] < low){
            low = a[i];
            idx = i;
        }
    }
    return make_pair(low, idx);
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

	int t; 
    cin >> t;
    while(t--){
        int n, k, p, m, val, ans=0;
        pair<int, int> low;
        cin >> n >> k >> p >> m;
        deque<int> a, b;
        p--; 
        k--;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        val = a[p];
        low = lower(a,k);
        while(true){
            if(p <= k){
                if((m - val) < 0){
                    break;
                }
                m -= val;
                a.erase(a.begin()+p);
                a.push_back(val);
                low = lower(a,k);
                ans++;
                p=n-1;
                continue;
            }
            low = lower(a, k);
            if((m - low.first) < 0){
                break;
            }
            m -= low.first;
            p--;
            a.erase(a.begin()+low.second);
            a.push_back(low.first);
            low = lower(a, k);
        }
        cout << ans << '\n';
    }
}
