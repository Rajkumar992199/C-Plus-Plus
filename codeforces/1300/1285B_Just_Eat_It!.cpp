#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		// sum = yasser's cupcake's tastiness, max_sum = maximum possible tastiness of adel's cupcake
		// pre_sum = 0 to n-1 cupcake's tastiness, post_sum = 1 to n - 1 cupcake's tastiness
		long long sum = 0, max_sum = 0, pre_sum = 0, post_sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
			if(i != n - 1) 
				pre_sum += a[i];
			if(i) // i != 0 (here i have written if(!i) in first attempt))
				post_sum += a[i];
			if(pre_sum < 0) // reset pre_sum
				pre_sum = 0;
			if(post_sum < 0) // reset post_sum
				post_sum = 0;

			max_sum = max(pre_sum, max_sum);
			max_sum = max(post_sum, max_sum);
		}
		if(max_sum < sum) 
			cout << "YES\n";
		else 
			cout << "NO\n"; 
	}
	return 0;
}
