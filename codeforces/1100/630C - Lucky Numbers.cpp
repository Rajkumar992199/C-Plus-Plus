#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
	cin >> n;
	long long ans = (1LL << (n + 1)) - 2;
    cout << ans << endl;
	return 0;
}