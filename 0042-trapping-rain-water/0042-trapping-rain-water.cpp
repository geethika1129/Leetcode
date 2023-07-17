class Solution {
public:
    int trap(vector<int>& height){
        int left = 0;
        int right = 0;
        int low = 0;
        int high = height.size()-1;
        int ans = 0;
        while(low < high){
            left = max(left,height[low]);
            right = max(right, height[high]);
            if(left < right){
                ans += left - height[low];
                low++;
            }else{
                ans += right - height[high];
                high--;
            }
        }
        return ans;
    }
};