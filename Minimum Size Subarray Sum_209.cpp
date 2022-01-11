int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int sum = 0;
        int len = INT_MAX;
        while (r < n) {
            sum += nums[r];
            r++;
            while (sum >= s) {
                len = min(len, r - l);
                sum -= nums[l];
                l++;
            }
            
        }
        if(len == INT_MAX){
            return 0;
        }
        return len;
    }