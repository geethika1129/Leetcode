class Solution {
public:
    string reverseWords(string s) {
        // int l=0;
        // int r=s.length()-1;
        // string temp="";
        // string ans="";
        // while(left<=right)
        // {
        //     char ch=s[l];
        //     if(ch!=' ')
        //     {
        //         temp+=ch;
        //     }
        //     else if(ch==' ')
        //     {
        //         if(ans!="") ans=temp+" "+ans;
        //         else ans=temp;
        //         temp="";
        //     }
        //     l++;
        // }
        // return ans;
        
        stringstream all(s); 
        string word,ans = "";
        while (all >> word)
            ans = word + " " + ans;
        return ans.substr(0,ans.length()-1);
    }
};