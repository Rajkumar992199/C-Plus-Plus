#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size(), mn = 100;

    vector<int> need(3), have(3), cost(3);

    for(int i = 0; i < n; i++) {
        if(s[i] == 'B')
            need[0]++;
        else if(s[i] == 'S')
            need[1]++;
        else
            need[2]++;
    }

    for(int i = 0; i < 3; i++) {
        cin >> have[i];
        if(need[i])
            mn = min(mn, have[i]/need[i]);
    }

    long long ans = mn, r;
    for(int i = 0; i < 3; i++) {
        cin >> cost[i];
        have[i] -= mn*need[i];
    }
    cin >> r;
    while(r > 0) {
        if(!(have[0]*need[0]) && !(have[1]*need[1]) && !(have[2]*need[2]))
            break;

        for(int i = 0; i < 3; i++) {
            if((need[i] - have[i])*cost[i] > r) {
                cout << ans << '\n';
                return 0;
            }
            else if(have[i] < need[i]) 
                r -= (need[i] - have[i])*cost[i];
        
            have[i] -= min(need[i], have[i]);
        }
        if(r >= 0)
            ans++;
    }

    int sum = need[0]*cost[0]+need[1]*cost[1]+need[2]*cost[2];

    if(r > 0) 
        ans += r/sum;
    
    cout << ans << '\n';

    return 0;
}