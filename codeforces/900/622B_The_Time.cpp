#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;
	int a, hour, minute;
	cin >> s >> a;
	
	hour = (s[0] - '0') * 10 + (s[1] - '0');
	minute = (s[3] - '0') * 10 + (s[4] - '0');
	minute += a % 60;
	hour += (a / 60) + (minute / 60);
	minute %= 60;
	hour %= 24;

	string ans;
	ans += ((hour / 10) + '0');
	ans += ((hour % 10) + '0');
	ans += ":";
	ans += ((minute / 10) + '0');
	ans += ((minute % 10) + '0');

	cout << ans;

	return 0;
}