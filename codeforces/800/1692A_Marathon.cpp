#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c,d;
    cin >> n;
        for(int i=0;i<n;i++){
            int k=0;
            cin >> a >> b >> c >> d;
            if(a<b) k++;
            if(a<c) k++;
            if(a<d) k++;
            cout << k << endl;
        }
}