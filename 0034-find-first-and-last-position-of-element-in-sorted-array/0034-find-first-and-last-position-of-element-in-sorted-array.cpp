class Solution {
public:
    int lr(vector<int>nums,int target,int low, int high){
        int resi=-1;
        while(low<=high)
        {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            resi=mid; high=mid-1;}
        else if (nums[mid] > target) high=mid-1;
        else low=mid+1;
        }
        return resi;
    }
    int lh(vector<int>nums,int target,int low, int high){
        int resi=-1;
        while(low<=high)
        {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            resi=mid; low=mid+1;}
        else if (nums[mid] > target) high=mid-1;
        else low=mid+1;
        }
        return resi;
    }
    

    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        vector<int>res;
        res.push_back(lr(nums,target,l,h));
        res.push_back(lh(nums,target,l,h));
        return res;

    }
};