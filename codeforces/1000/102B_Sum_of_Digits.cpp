#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    string s;
    cin >> s ;
    long long x, sum = 0, ans = 0;

    for(int i = 0; i < s.size(); i++) { // initial sum
        x = s[i] - '0';
        sum += x;
    }
    if(s.size() > 1)
        ans++;
    while(sum > 9) {
        s = "";
        ans++; // use spell
        while(sum) { // current sum storing
            char c = (sum % 10) + '0';
            s = c + s;
            sum = sum / 10;
        }
        // counting next sum
        for(int i = 0; i < s.size(); i++) {
            x = s[i] - '0';
            sum += x;
        }
    }
    cout << ans;
}