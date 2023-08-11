class Solution {
public:
    string removeOuterParentheses(string s) {
        int c=0;
        string str;
        for(auto i:s){
            if(i=='(')
            {
                if(c++){
                    str+='(';
                }
            }
            else{
                if(--c){
                    str+=')';
                }
            }
        }
        return str;
    }
};