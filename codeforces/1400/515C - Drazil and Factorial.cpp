#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(s[i] != '0' && s[i] != '1'){
            if(s[i] == '4')
                v.insert(v.end(),{3,2,2});
            else if(s[i]=='6')
                v.insert(v.end(),{5,3});
            else if(s[i]=='8')
                v.insert(v.end(),{7,2,2,2});
            else if(s[i]=='9')
                v.insert(v.end(),{2,3,3,7});
            else 
                v.push_back(s[i]-'0');
        }
    }

    sort(v.rbegin(),v.rend());
    for(auto& x : v)
        cout << x;
    cout << endl;
}