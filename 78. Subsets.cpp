class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>s;
        vector<vector<int> > res;
        f(nums,res,s,0);
        return res;
    }
    void f(vector<int>& nums, vector<vector<int> >& res,vector<int>& s, int i)
    {
        res.push_back(s);
        for(int j=i;j<nums.size();j++)
        {
            s.push_back(nums[j]);
            f(nums,res,s,j+1);
            s.pop_back();
        }
    }
                
};