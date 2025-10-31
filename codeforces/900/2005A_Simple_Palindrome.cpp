#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    string vowels = "aeiou";
    int remaining = n % 5; // extra letters required (more than equal vowels)
    for(int i = 0; i < 5; i++) { // index of vowels
        for(int j = 0; j < n / 5; j++) // counts of vowels
            cout << vowels[i];
        if(remaining > 0) { 
            cout << vowels[i];
            remaining--;
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while(t--)
        solve();
} 