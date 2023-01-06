class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int k;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto z:m)
        {
            if(z.second>1) 
            {
                k=z.first;
                break;
            }

        }
        return k;
    }
};