class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size(), mn = 0, current = 0, ans = n;
        for(int i = n - 1; i >= 0; i--){
            if(customers[i] == 'Y')
                current++;
            else current--;
            if(mn >= current) {
                mn = current;
                ans = i;
            }
        }
        return ans;        
    }
};