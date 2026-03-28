#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, x;
	double y;
	cin >> n >> x >> y;
	
	y = ceil(n * y / 100);
	int z = y;
	cout << max(0, z - x);

	return 0;
}