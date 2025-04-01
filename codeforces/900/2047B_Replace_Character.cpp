#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, max = 0, min = 11;
        string s1, s2;
        char mx, mn; 
        cin >> n >> s1;
        set<char> a;
        s2 = s1;
        sort(s1.begin(), s1.end());
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s1[i - 1]){
            int c = count(s1.begin(), s1.end(), s1[i]);
                if (c > max) {
                    mx = s1[i];
                    max = c;
                }
                if (c <= min) {
                    mn = s1[i]; 
                    min = c;
                }
            }
        }
        for(int i = 0; i < s1.size(); i++) if (s2[i] == mn) {
            s2[i] = mx;
            break;
        }
        cout << s2 << endl;
    }
}