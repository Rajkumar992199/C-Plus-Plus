#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> t;
	while(t--) {
		long long a[1001],px,py,qx,qy,s = 0;
		cin >> n >> px >> py >> qx >> qy;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			s += a[i];
		}
		sort(a + 1, a + n + 1);
		cout << (s >= sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy)) && s - a[n] + sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy)) >= a[n] ? "Yes\n":"No\n");
	}
	return 0;
}