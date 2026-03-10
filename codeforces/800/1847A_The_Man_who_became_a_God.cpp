#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , k;
	cin >> n >> k;

	long long arr[n];
	for(int i = 0; i < n; i++)
        cin >> arr[i];
	vector<long long> v;
	long long sum = 0;
	for(int i = 1; i < n; i++){
		v.push_back(abs(arr[i] - arr[i-1]));
		sum += v.back();
	}

	sort(v.begin(), v.end());
	for(int groups = 1; groups < k; groups++){
		sum -= v.back();
		v.pop_back();
	}
	cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin >> t;
    while(t--)
	    solve();
	return 0;
}