#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s, t;
	int hour1, minute1, hour2, minute2;
	cin >> s >> t;
	
	hour1 = (s[0] - '0') * 10 + (s[1] - '0');
	minute1 = (s[3] - '0') * 10 + (s[4] - '0');

	hour2 = (t[0] - '0') * 10 + (t[1] - '0');
	minute2 = (t[3] - '0') * 10 + (t[4] - '0');

	int h = hour1 - hour2, m = minute1 - minute2;
	
	if(m < 0) {
		h--;
		m += 60;
	}

	if(h < 0) 
		h += 24; 

	string ans;
	ans += (h / 10) + '0';
	ans += (h % 10)+ '0';
	ans += ':';
	ans += (m / 10) + '0';
	ans += (m % 10) + '0';

	cout << ans << endl;

	return 0;
}