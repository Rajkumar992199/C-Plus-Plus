#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        char c[n];
        int balloons=0;
        for(int j=0;j<n;j++){
            cin >> c[j];
            int count=0;
            for(int k=0;k<j;k++){
                if(c[j]==c[k]){
                    balloons++;
                    count++;
                    break;
                }
            }
            if(count==0) balloons += 2;
        }
        cout << balloons << endl;
    }
}