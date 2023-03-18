class Solution {
public:
    bool isValid(string s) {
        if(s.length()&1) 
        {
            return false;
        }
        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                st.push(s[i]);
            }
            else{
                if(st.size()==0)
                {
                    return false;
                }
                int curr=st.top();
                st.pop();
                    if((curr=='('&&s[i]==')')||(curr=='['&&s[i]==']')||(curr=='{'&&s[i]=='}'))
                    {
                        continue;
                    }
                else return false;
            }
        }
        return st.empty();
    }
    
};