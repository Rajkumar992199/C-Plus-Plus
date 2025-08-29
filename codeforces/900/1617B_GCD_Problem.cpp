#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x--) {
        int n, count = 0;
        cin >> n;
        if(n & 1){
            int i = n - 3;
            int j = 2;
            while(__gcd(i,j)!=1){
                i--;
                j++;
            }
            cout << i << " " << j << " 1" << endl;
        }
        else
            cout << n - 3 << " 2 1" << endl;
    }
    return 0;
}