#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
        cin >> n >> k;
        string s;
        cin >> s; 
        int count_up = 0, count_do = 0, count = 0;
        for(int i = 0; i < k; i++){
            if(s[i] == '1')
                count_do++;
            else if(s[i] == '0')
                count_up++;
            else
                count++;
        }

        char ans[n];
        for(int i = 0; i < n; i++)
            ans[i] = '+';

        for(int i = 0; i < count_up; i++)
            ans[i] = '-';
        
        for(int i = 0; i < count_do; i++)
            ans[n-1-i]='-';

        int rem = n - count_do - count_up;
        if(rem <= count)
            for(int i = count_up; i <= n -count_do - 1;i++)
                ans[i]='-';
        else{
            for(int i = 0; i < count; i++)
                ans[count_up+i] = '?';
            for(int i = 0; i < count; i++)
                ans[n - count_do - i - 1]='?';
        }
        for(int i = 0; i < n; i++)
            cout << ans[i];
        cout << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}