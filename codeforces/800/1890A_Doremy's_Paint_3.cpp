#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],k=0;
        set<int> b;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            b.insert(a[i]);
        }
        if(b.size()>2) {
            cout << "NO" << endl;
            continue;
        }
        sort(a,a+n);
        if(n>3) for(int i=0;i<(n/2)-1;i++) {
            if(a[i]==a[i+1] && a[n-i-1]==a[n-i-2]) k++;
            else break;
        }
        if(n%(n/2)==1 && (a[n/2]==a[(n/2)-1] || a[n/2]==a[(n/2)+1])) k++; 
        if((n==2) || (n==3 && ((a[0]==a[1])||a[1]==a[2]))) cout << "YES" << endl;
        else if(n!=3 && k== ((n/2)-1 + (n%(n/2)))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}