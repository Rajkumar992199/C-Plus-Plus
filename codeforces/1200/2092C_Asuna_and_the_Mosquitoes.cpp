#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t, n, m, a, s, k;
    cin >> t;
	while(t--){
		cin >> n;
		m = s = k = 0;
		for(int i = 0; i < n; i++){
		  cin >> a;
			s += a;
			k += a & 1;
			m = max(m, a);
		}
		if(k == 0 || k == n) cout << m << endl;
		else cout << s + 1 - k << endl;
	}
}