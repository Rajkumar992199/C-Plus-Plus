class Solution {
    public:
        int reverse(int x) {
            long long a[10] , len = 0 , ans = 0;
            for(int i = 0; i < 10; i++){
                a[i] = x % 10;
                x = x / 10;
                len++;
                if(x == 0) break;
            }
            for(int i = 0; i < len; i++) {
                ans += a[len - i - 1] * pow(10, i);
            }
            if(x < 0) ans = 0 - ans;
            if(ans > INT_MAX) return 0;
            if(ans < INT_MIN) return 0;
            return ans;
        }
    };