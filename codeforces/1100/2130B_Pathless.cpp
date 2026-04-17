#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, t, s = 0, x;
   	cin >> n >> t;
   
   vector<int> a(n), f(3);
   for (int i = 0; i < n; i++){
        cin >> x;
        s += x;
        f[x]++;
   }
 
   if (t - s == 1 || t < s){
        while (f[0]--)
            cout << 0 << " ";
        
        while (f[2]--)
            cout << 2 << " ";
        
        while (f[1]--)
            cout << 1 << " ";
        cout << endl;  
   }
   else cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;

	while(t--)
		solve();

	return 0;
}