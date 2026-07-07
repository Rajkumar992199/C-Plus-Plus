#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l = 0;
	cin >> n;
    map<long long, int> mp;
    mp[0] = 0;
    long long ans = 0, x;
    vector<long long> sum(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> x;
        sum[i] = sum[i-1] + x;

		if(mp.count(sum[i]))
            l = max(mp[sum[i]]+1, l);
		ans += (i-l);
		mp[sum[i]] = i;
	}

	cout << ans;
	return 0;
}