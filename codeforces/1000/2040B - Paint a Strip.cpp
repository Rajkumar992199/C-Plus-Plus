#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; 
	cin >> n; 
    if(n == 1)
        cout << "1" << endl; 
	else {
		long long op = 1, one = 1; 
		while(one < n){
			op++; 
			one = (one+1) *2; 
		}  
		cout << op  << endl; 
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) 
        solve();
    
    return 0;
}