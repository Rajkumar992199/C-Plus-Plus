#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
		cin >> n;
		vector<long long> a(n);
		map<int,int> mp;
		for(long long i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int cnt = 0;
		for(auto i : mp) cnt++;
		for(int i = 1; i <= n; i++)
			cout << max(i,cnt) << " ";
		cout << endl;
    }
}