#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,a,b,c,d;
    cin >> y;
    y++;
    a = (y/1000);
    b = ((y%1000)/100);
    c = ((y%100)/10);
    d = (y%10);
    while(a==b || b==c || c==d || a==c || b==d || a==d){
        d++;
        if(d==10){
            d=0;
            c++;
        }
        if(c==10){
            c=0;
            b++;
        }
        if(b==10){
            b=0;
            a++;
        }
    }
    x = a*1000 + b*100 + c*10 + d;
    cout << x;
}