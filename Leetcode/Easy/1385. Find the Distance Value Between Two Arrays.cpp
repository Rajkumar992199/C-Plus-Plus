class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        arr2.push_back(INT_MAX); 
        int cnt = 0, i = 0;
        for (int a : arr1) { 
            while (arr2[i] < a - d) 
                i++;
            cnt += arr2[i] > a + d;
        }
        return cnt;
    }
};