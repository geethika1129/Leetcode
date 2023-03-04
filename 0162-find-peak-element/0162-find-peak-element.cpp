class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        while(l<h)
        {
            int m1=(l+h)/2;
            int m2=m1+1;
            if(nums[m1]<nums[m2])
            {
                l=m2;
            }
            else
            {
                h=m1;
            }
        }
        return l;
    }
};