class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.length();
        unordered_map<char,pair<int,int>>m;
        for(int i=0;i<n;i++)
        {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for(auto [c,p] :m)
        {
            if (p.first == 1) {
                n = min(n, p.second);
            }
            

        }
        return n == s.size() ? -1 : n;
    }
};