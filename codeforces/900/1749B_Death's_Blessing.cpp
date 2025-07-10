#include <bits/stdc++.h>
#define int long long 
using namespace std;
 
int32_t main(){
	int t;
	cin >> t;
	while(t--){
		int n, ans = 0, max =- 1;
		cin >> n;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			ans += a;
		}
		for(int i = 0; i < n; i++){
			int b;
			cin >> b;
			ans += b;
			if(b > max) max = b;
		}
		ans -= max;
		cout << ans << endl;
	}
    return 0;
}