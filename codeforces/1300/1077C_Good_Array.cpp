#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    int n, ans = 0;
    cin >> n;

    vector<long long> a(n), presum(n + 1, 0), b;
    map<long long, vector<int>> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i]; // elements of array
        mp[a[i]].push_back(i + 1); // occurrence of a[i]
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++)
        presum[i + 1] = presum[i] + a[i]; // prefix sum

    // if by removing last element gives good array
    if(presum[n - 2] == a[n - 2]) { 
        for(auto it : mp[a[n - 1]]) {
            b.push_back(it);
            ans++;
        }
    }
    // other than last element, which element is required to get good array
    long long temp = -1;
    if(presum[n - 1] - a[n - 1] > 0) 
        temp = presum[n - 1] - a[n - 1];
    if(temp != -1 && temp != a[n - 1]) {
        for(auto it : mp[temp]) {
            b.push_back(it);
            ans++;
        }
    }
    
    cout << ans << endl;
    for(auto it : b) {
        cout << it << " ";
    }
}
