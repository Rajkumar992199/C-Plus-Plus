class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<long long, bool> mp;
        for (int i = 0; i < arr1.size(); i++){
            while (arr1[i]){
                mp[arr1[i]] = true;
                arr1[i] /= 10;
            }
        }
        long long ans = 0;
        for (int i = 0; i < arr2.size(); i++){
            while (arr2[i]){
                if (mp[arr2[i]]){
                    long long num = arr2[i];
                    long long len = log10(abs(arr2[i])) + 1;
                    ans = max(ans, len);
                    break;
                }
                arr2[i] /= 10;
            }
        }
        return ans;
    }
};