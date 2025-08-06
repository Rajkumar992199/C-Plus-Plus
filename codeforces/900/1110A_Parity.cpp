#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long b, k;
    cin >> b >> k;
    bool c = 0;
    for(long long i = 0; i <  k - 1; i++)
    {
        long long x;
        cin >> x;
        if(x % 2) c = !c;
    }
    long long x;
    cin >> x;

    if(b % 2 == 0)
    {
        if(x % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }
    else {
        if(x % 2) c = !c;
        if(c)
            cout << "odd" << endl;
        else
            cout << "even" << endl;
    }
}
