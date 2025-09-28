#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int dsa1, toc1, dm1, dsa2, toc2, dm2, sum1, sum2;
        cin >> dsa1 >> toc1 >> dm1 >> dsa2 >> toc2 >> dm2;
        sum1 = dsa1 + toc1 + dm1;
        sum2 = dsa2 + toc2 + dm2;
        if(sum1 > sum2) cout << "Dragon\n";
        else if(sum1 < sum2) cout << "Sloth\n";
        else {
            if(dsa1 > dsa2) cout << "Dragon\n";
            else if(dsa1 < dsa2) cout << "Sloth\n";
            else {
                if(toc1 > toc2) cout << "Dragon\n";
                else if(toc1 < toc2) cout << "Sloth\n";
                else cout << "Tie\n";
            }
        }
    }
}
