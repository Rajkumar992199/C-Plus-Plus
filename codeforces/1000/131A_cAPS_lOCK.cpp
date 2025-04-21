#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; 
	cin >> s;      
	bool Change = true;
	for (int i = 1; i < s.size(); i++) { 
		if (islower(s[i])) {  
			Change = false; 
			break; 
		}
	}
	if (Change) {  
		for (int i = 0; i < s.size(); i++) { 
			if (isupper(s[i])) s[i] = tolower(s[i]);
			else s[i] = toupper(s[i]); 
		}
	}
	cout << s << endl;
}