 void solve(vector<int>& nums,int index, vector<vector<int>> &res){
        if(index >= nums.size()){
            for(int i:nums){
                cout<<i<<" ";
            }
            res.push_back(nums);
            return;
        }
        cout<<index<<endl;
        
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            solve(nums,index + 1,res);
            swap(nums[index],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int index = 0;
        solve(nums,index,res);
        return res;
    }