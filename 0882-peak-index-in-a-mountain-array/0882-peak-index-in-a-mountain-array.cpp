class Solution {
public:
    int bs(vector<int>& nums,int l,int h){
        
        while(l<h){int mid=(l+h)/2;
        if(nums[mid] > nums[mid + 1]) h=mid;
        else l=mid+1;
        }
         return l;
     }
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0,h=arr.size()-1;
        int k=bs(arr,l,h);
        return k;
    }
};