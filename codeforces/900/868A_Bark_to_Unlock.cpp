#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, bark, check = "00";
	int n;
	cin >> s >> n;

	for(int i = 0; i < n; i++) {
		cin >> bark;

		if(bark[0] == s[1])
			check[0] = '1';
		if(bark[1] == s[0])
			check[1] = '1';
		if(bark == s)
			check = "11";

		// kashtanka can produce the password
		if(check == "11") { 
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

	return 0;
}