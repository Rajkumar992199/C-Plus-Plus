#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    long long n;
    cin >> n;
    set<set<char>> se;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        set<char> temp;
        for(auto x : s)
            temp.insert(x);
        se.insert(temp);
    }
    cout << se.size() << endl;
}
