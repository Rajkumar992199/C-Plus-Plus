#include <bits/stdc++.h>
using namespace std;

float nCp(float q, float temp) {
    float up = 1, low = 1;
    for (int i = 1; i <= temp; i++) {
        up *= (q - i + 1);
        low *= i;
    }
    return up / low;
} 

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    float p1 = 0, p2 = 0, n1 = 0, n2 = 0, q = 0, temp;
    for(int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') p1++;
        else n1++;
        if (s2[i] == '+') p2++;
        else if (s2[i] == '-') n2++;
        else q++;
    } 
    float ans;
    if (p2 > p1 || n2 > n1) ans = 0;
    else {
        temp = min(p1 - p2, n1 - n2);
        ans = nCp(q, temp) / pow(2, q);
    }
    cout << fixed << setprecision(12) << ans;
}