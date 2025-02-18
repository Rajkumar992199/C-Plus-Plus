#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        int sum=0;
        for(int i=0;i<10;i++){
            cin >> s;
            for(int j=0;j<10;j++){
                if(s[j]!='.'){
                    if(i<5 && (j>=i && j<10-i)) sum += (i+1);
                    else if (i<5 && (j<i || j>= 10-i)) {
                        if(j<5) sum += j+1;
                        else sum += 10-j;
                    }
                    else if(i>=5 && (j>=9-i && j<i+1)) sum += (10-i);
                    else {
                        if(j<5) sum += j+1;
                        else sum += 10-j;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}