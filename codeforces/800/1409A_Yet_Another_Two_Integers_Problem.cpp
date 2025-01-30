#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long a,b;
    cin >> n;
    for(int i=0;i<n;i++){
        long long k=0;
        cin >> a >> b;
        k = abs((a-b)/10);
        if((a-b)%10!=0) k++;
        cout << k << endl;
    }
}