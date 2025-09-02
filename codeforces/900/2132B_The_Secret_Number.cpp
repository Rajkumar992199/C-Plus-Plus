#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t = 1;
    cin >> t;
    while(t--) {
        long long r;
        cin >> r;
        long long d = 11;
        vector <long long> ans;
        while (r >= d) 
        {
            if (r % d == 0)
                ans.push_back(r / d);
            d = (d - 1) * 10 + 1;
        }
        cout << ans.size() << endl;
        for (int i = ans.size() - 1; i >= 0; --i)
            cout << ans[i] << ' ';
        if(ans.size() != 0) cout << endl;
    }
}