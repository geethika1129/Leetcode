class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>s;
        vector<vector<int> > res;
        int i=0;
        f(nums,res,s,i);
        return res;
    }
    void f(vector<int>& nums, vector<vector<int> >& res,vector<int>& s, int i)
    {
        res.push_back(s);
        for(int j=i;j<nums.size();j++)
        {
            s.push_back(nums[i]);
            f(nums,res,s,i+1);
            s.pop_back();
        }
    }
                
};