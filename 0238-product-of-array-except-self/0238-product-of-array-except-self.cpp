class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre=1;
        vector<int>res(nums.size(),1);
        res[0]=1;
         for(int i=1;i<nums.size();i++){
            res[i]=res[i-1]*nums[i-1];
         }
         int pos=1;
         for(int i=nums.size()-1;i>=0;i--){
            res[i]*=pos;
            pos*=nums[i];
         }
         return res;
    }
};