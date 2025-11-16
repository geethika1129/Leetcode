class Solution {
public:
    int isv(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        else return false;
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(isv(s[i])) cnt++;
        }
        int m=cnt;
        for(int i=k;i<s.size();i++){
            if(isv(s[i])) cnt++;
            if(isv(s[i-k])) cnt--;
            if(cnt>m) m=cnt;
        }
        return m;
    }
};