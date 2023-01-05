class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>re;
        func(nums,0,nums.size()-1,re);
        return re;
    }
    void func(vector<int>& nums,int l,int r,vector<vector<int>>&re)
    {
        if(l>=r) 
        {
            re.push_back(nums);
            return;
        }
        
            for(int i=l;i<=r;i++)
            {
                swap(nums[l],nums[i]);
                func(nums,l+1,r,re);
                swap(nums[l],nums[i]);
            }
        
    }
};


//stl sol

