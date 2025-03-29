#include <iostream>
using namespace std;
int main ()
{
    int n, i, k = 0, p, m;
    cin >> n;
    int a[n], j = n - 1;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++)
    {
        if(a[i] > a[k]) k = i;
        if(a[i] <= a[j]) j = i;
    }
    p = (k) + (n - j - 1);
    if(k > j) p--;
    cout << p;
}