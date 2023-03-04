class Solution {
public:
    void func(int ind,vector<int>nums,vector<vector<int>> &ans,vector<int> &ds,int target)
    {
        if(ind==nums.size())
        {
            if(target==0)
            {
                ans.push_back(ds);                
            }
            return;
        }
        if(nums[ind]<=target)
        {
            ds.push_back(nums[ind]);
            func(ind,nums,ans,ds,target-nums[ind]);
            ds.pop_back();
        }
        func(ind+1,nums,ans,ds,target);
            
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        func(0,candidates,ans,ds,target);
        return ans;
    }
};