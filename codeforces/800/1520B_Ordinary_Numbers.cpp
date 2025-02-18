#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int num = 0,sum=11,j=2;
        if(n<10) num += n%10;
        else {
            num += 9;
            for(int i=n; i>0; i= i/10) {
                if(n/sum<9) num += n/sum;
                else num += 9;
                sum += pow(10,j);
                j++;
            }
        }
        cout << num << endl;
    }
}