#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        if (n == 1)
            cout << 0 << endl;
        else
        {
            int var = n - (k - 1);
            int steps = 0;
            while(n >= k)
            {
                n = var;
                steps++;
                var = n - k + 1;
            }
            if(n != 1)
                steps++;
            cout << steps << endl;
        }
    }
    return 0;
}