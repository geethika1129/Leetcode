class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<int,int>ms;
        map<int,int>ts;
        for(int i=0;i<s.size();i++){
            ms[s[i]-'a']++;
            ts[t[i]-'a']++;
        }
        return ms==ts;
    }
};