class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int m=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            m=min(m,nums[i]);
            maxi=max(maxi,(nums[i]-m));
        }
        return maxi;
    }
};