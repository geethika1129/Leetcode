class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        set<int>s;
        vector<int>v;
        for(int i=0;i<min(n,m);i++) 
        {
        s.insert(nums1[i]);
        s.insert(nums2[i]);
        }
        if(m>n)
        {
            for(int i=n;i<m;i++)
            {
                s.insert(nums2[i]);
            }
        }
        else
        {
            for(int i=m;i<n;i++)
            {
                s.insert(nums1[i]);
            }
        }
        for(auto &z:s) v.push_back(z);
        return v;
    }
};


///method 2

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>ma;
        vector<int>v;
        for(int i=0;i<n;i++) ma[nums1[i]]++;
        for(int i=0;i<m;i++)
        {
            if(ma[nums2[i]]>0)
            {
                v.push_back(nums2[i]);
                ma[nums2[i]]--;
            }
        }
        return v;
    }
};