#include <iostream> 
using namespace std;
int main(){
	int t;
	cin >> t;
	getchar();
	while(t--){
		string s;
		cin >> s;
		int len = s.length();
		bool b = 0;
		int r = 0;
		for(int i = len - 1; i > 0; i--){
			if(s[i] != '0') b = 1;
			if(b && s[i] == '0')r++;
		}cout << len - r - 1 << endl;
	}
}