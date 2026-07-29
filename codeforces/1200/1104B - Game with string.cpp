#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    stack<int> st;
    int moves = 0;
 
    for (int i = 0; i < s.size(); i++) {
        if (!st.empty() && st.top() == s[i]) {
            st.pop();
            moves++;
        } 
        else 
            st.push(s[i]);
    }
 
    if (moves % 2 == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
 
    return 0;
}