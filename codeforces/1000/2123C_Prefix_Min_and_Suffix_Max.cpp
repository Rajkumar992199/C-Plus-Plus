#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin >> t;
	while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        string s(n,'0');
        int maxi = a[n - 1];
        for(int i = n - 1; i >= 0; i--){
            if(a[i] > maxi) maxi = a[i];
            if(a[i] == maxi) s[i] = '1';
        }
        int mini = a[0];
        for(int i = 0; i < n; i++){
            if(a[i] < mini) mini = a[i];
            if(a[i] == mini) s[i] = '1';
        }
        cout << s << endl;
    }
    return 0;
}