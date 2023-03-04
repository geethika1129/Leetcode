class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int meh,tm;
     tm=INT_MIN;meh=0;
        for(int i=0;i<n;i++)
        {
           
            meh+=nums[i];
            if(meh>tm) tm=meh;
            if(meh<0)
            {
                meh=0;
            }
        }
        return tm;
    }
};