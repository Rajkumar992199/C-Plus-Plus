#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return (a * b / __gcd(a, b)); 
}

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    long long n1 = (d / k) + (d / l) + (d / m) + (d / n); 
    long long n2 = (d / lcm(k , l)) + (d / lcm(k , m)) + (d / lcm(k , n)) + (d / lcm(l , m)) + (d / lcm(l , n)) + (d / lcm(m , n)); 
    long long n3 =  (d / lcm(lcm(k , l) , m)) + (d / lcm(lcm(k , m) , n)) + (d / lcm(lcm(l , m) , n)) + (d / lcm(lcm(k , l) , n));
    long long n4 =  d / lcm(lcm(k , l) , lcm(m , n));
    long long ans = n1 - n2 + n3 - n4;
    cout << ans;
    return 0;
}