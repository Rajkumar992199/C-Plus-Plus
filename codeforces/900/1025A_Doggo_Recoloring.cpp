#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	set<char> ch;
	for(auto it: s)
		ch.insert(it);

	if(ch.size() < n || ch.size() == 1)
		cout << "Yes\n";
	else 
		cout << "No\n";

	return 0;
}