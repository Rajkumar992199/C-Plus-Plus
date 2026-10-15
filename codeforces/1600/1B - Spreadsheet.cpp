#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        bool flag = false;

        if (s[0] == 'R' && isdigit(s[1])) {
            auto pos = s.find('C');
            if (pos != string::npos) {
                flag = true;
                int row = stoi(s.substr(1, pos - 1));
                int col = stoi(s.substr(pos + 1));

                // Convert column number to letters
                string column = "";

                while (col > 0) {
                    col--;
                    column += char('A' + col % 26);
                    col /= 26;
                }

                reverse(column.begin(), column.end());

                cout << column << row << '\n';
            }
        } 
        if(!flag) {
            int col = 0, i = 0;
            while (i < (int)s.size() && s[i] >= 'A' && s[i] <= 'Z') {
                col = col * 26 + (s[i] - 'A' + 1);
                i++;
            }

            string row = s.substr(i);
            cout << 'R' << row << 'C' << col << '\n';
        }
    }

    return 0;
}