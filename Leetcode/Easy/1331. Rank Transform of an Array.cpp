class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> map;
        vector<int> a = arr;
        sort(a.begin(), a.end());
        int i = 1;
        for (int it : a) 
            if(!map.count(it))
                map[it] = i++;

        for (int i = 0; i < arr.size(); i++) 
            arr[i] = map[arr[i]];
        
        return arr;
    }
};