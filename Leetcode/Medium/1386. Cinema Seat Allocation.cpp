class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int, vector<bool>> empty;
        for(auto it: reservedSeats) {
            if(!empty.count(it[0]-1))
                empty[it[0]-1] = {1, 1, 1};
            if(it[1] > 1 && it[1] < 6)
                empty[it[0]-1][0] = 0;
            if(it[1] > 3 && it[1] < 8)
                empty[it[0]-1][1] = 0;
            if(it[1] > 5 && it[1] < 10)
                empty[it[0]-1][2] = 0;
        }
        long long ans = 2LL * (n - empty.size());
        for(auto it : empty) {
            if(it.second[0] == 1 && it.second[2] == 1)
                ans += 2;
            else if(it.second[0] || it.second[1] || it.second[2])
                ans++;
        }

        return ans;
    }
};