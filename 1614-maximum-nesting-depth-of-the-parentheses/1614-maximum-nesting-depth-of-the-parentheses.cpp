class Solution {
public:
    int maxDepth(string s) {
        int r=0,c=0;
        for(auto k:s){
            if(k=='(')
                r=max(r,++c);
            if(k==')') c--;
        }
        return r;
    }
};