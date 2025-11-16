class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,h=0,sum=0,m=INT_MAX;
        for(h=0;h<nums.size();h++){
            sum+=nums[h];
            // if(sum==target) {
            //     if(h-l+1<m) m=h-l+1;
            // }
            while(sum>=target){
                if(h-l+1<m) m=h-l+1;
             
                sum-=nums[l];   l++;
            }
        }
        return (m==INT_MAX)?0:m;
    }
};