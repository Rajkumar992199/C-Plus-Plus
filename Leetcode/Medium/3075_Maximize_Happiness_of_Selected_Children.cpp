class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        sort(happiness.rbegin(), happiness.rend());
        for(int i = 0; i < k; i++) {
            int temp = happiness[i] - i;
            if(temp > 0)
                sum += temp;
            else 
                break;
        }
        return sum;
    }
};