#include<bits/stdc++.h>
using namespace std;

const int N=1e6+6;
int a[N];
int main()
{
	int t, n, k, i;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for(i = 0; i < n; i++)
			cin >> a[i];
		int flag = a[k-1];
		sort(a, a + n);
		for(i = 0; i < n - 1; i++)
		{
			a[i] = a[i + 1] - a[i];
			if(flag < a[i]) break;
		}
		if(i >= n - 1) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
	return 0;
}