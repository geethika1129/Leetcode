class Solution {
public:
    void func(int ind,vector<int>nums,vector<vector<int>> &ans,vector<int> &ds,int target)
    {
        if(target==0)
            {
                ans.push_back(ds);   return;             
            }
            
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
             func(i+1,nums,ans,ds,target-nums[i]); 
            ds.pop_back();
        }
        
            
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
          sort(candidates.begin(), candidates.end());
        vector<int>ds;
        func(0,candidates,ans,ds,target);
        return ans;
    }
};