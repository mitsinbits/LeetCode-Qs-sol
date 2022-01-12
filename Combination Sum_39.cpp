   void solve(vector<int> &candidates,vector<int> ans,vector<vector<int>> &res,int target,int index ){
        if(target == 0){
            res.push_back(ans);
            return;
        }
        for(int i = index;i<candidates.size() && target>=candidates[i];i++){
            ans.push_back(candidates[i]);
            solve(candidates,ans,res,target-candidates[i],i);
            ans.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ans;
        vector<vector<int>> res;
        int index = 0;
        solve(candidates,ans,res,target,index);
        return res;
        
    }