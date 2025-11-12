#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, sum = 0;
  string s;
  cin >> n >> s;
  for(int i = 0; i < n; i++) // sum of digits
    sum += s[i] - '0';
  int last_digit = s[n - 1] - '0'; // last digit of number

  // if number is even or digits sum is not divisible by 2 then remove last digit
  while((last_digit % 2 == 0 || sum % 2 == 1)&& s.size()) { 
    sum -= s[s.size() - 1] - '0';
    s.erase(s.size() - 1);
    last_digit = s[s.size() - 1] - '0';
  } 

  if(sum % 2 == 0 && s.size()) cout << s << endl;
  else cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--) 
      solve();

    return 0;
}
