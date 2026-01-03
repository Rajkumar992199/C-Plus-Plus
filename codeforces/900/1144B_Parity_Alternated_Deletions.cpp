#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    long long n;
	cin >> n;
    vector<long long> odd, even;
	for(int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		if(x % 2)
			odd.push_back(x);
		else
			even.push_back(x);
	}
	if(odd.size() == even.size()) {
		cout << 0 << endl;
	}
    else {
        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        long long ans = 0;
        for(int i = 0; i < odd.size() - min(odd.size(), even.size()); i++) 
            ans += odd[i];
        for(int i = 0; i < even.size() - min(odd.size(), even.size()); i++) 
            ans += even[i];
        long long extra = 0;
        if(odd.size() > min(odd.size(), even.size()))
            extra = max(extra, odd[odd.size() - min(odd.size(), even.size()) - 1]);
        if(even.size() > min(odd.size(), even.size()))
            extra = max(extra, even[even.size() - min(odd.size(), even.size()) - 1]);
        ans -= extra;
        cout << ans << endl;
    }
}