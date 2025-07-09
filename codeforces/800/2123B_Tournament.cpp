#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, j, k, mx = 0; 
		cin >> n >> j >> k;
		vector<int> a(n);
		for(int i = 0; i < n; i++)cin >> a[i], mx = max(mx,a[i]);
		if(k >= 2)cout << "YES\n";
		else cout << (mx == a[j-1] ? "YES\n" : "NO\n");
	}
}
