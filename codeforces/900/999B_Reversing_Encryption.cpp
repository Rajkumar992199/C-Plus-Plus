#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    string s;
	cin >> n >> s;

	for(int i = 2; i * 3 <= n; i++) 
        if(n % i == 0) 
            reverse(s.begin(), s.begin() + i);

    if(n % 2 == 0)
        reverse(s.begin(), s.begin() + (n / 2));

    reverse(s.begin(), s.end());
    
    cout << s;
	return 0;
}