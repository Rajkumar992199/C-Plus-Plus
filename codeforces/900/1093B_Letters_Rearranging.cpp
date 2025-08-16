#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s.back()) 
      cout << -1 << endl;
    else 
      cout << s << endl;
  }
  return 0;
}