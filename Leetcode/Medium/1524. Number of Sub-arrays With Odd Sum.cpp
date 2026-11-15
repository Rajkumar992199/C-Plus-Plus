class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long count = 0, prefix = 0;
        int even = 1, odd = 0;
        for (int i = 0; i < arr.size(); i++) {
            prefix += arr[i];
            if (prefix % 2 == 0) {
                count += odd;
                even++;
            } 
            else {
                count += even;
                odd++;
            }
        }
        return count % 1000000007;
    }
};