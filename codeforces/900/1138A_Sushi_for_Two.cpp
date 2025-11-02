#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, top = 0, ans;
    cin >> n;
    vector<int> a(n), b(n);
	for(int i = 0; i < n; i++){
        cin >> a[i];
		if(!i || a[i]!=a[i-1])
			b[top++] = 1;
		else
			b[top-1]++;
	}
	for(int i = 0; i< top-1; i++)
		ans = max(ans, min(b[i], b[i+1]));
    cout << ans * 2;
	return 0;
}
