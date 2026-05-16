#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    stack<char> st;

    if(s.size() % 2) // length is odd
        cout << "No";
    else {
        for(char c : s) {
            if(!st.empty() && st.top() == c)
                st.pop();
            else
                st.push(c);
        }

        if(st.empty())
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}