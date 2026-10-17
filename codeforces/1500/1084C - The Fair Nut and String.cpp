#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int count = 1, MOD = 1e9+7;
    long long sum = 1;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a')
            count++;
        else if(s[i] == 'b') {
            sum = (sum*count) % MOD;
            count = 1;
        }
    }
    sum = (sum*count) % MOD;
    cout << (sum-1) << endl;
    
    return 0;
}