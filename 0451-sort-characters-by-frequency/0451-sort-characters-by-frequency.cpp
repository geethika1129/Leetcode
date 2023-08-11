class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        priority_queue<pair<int,char>>pq;
        string ans;
        
        for(char c:s) m[c]++;
        for(auto it:m) pq.push({it.second,it.first});
        while(!pq.empty()){
//             pair<int,char> curr=pq.top();
           
//             int f=curr.first;
//             if(f>0){
//                 ans+=curr.second;
//                 f--;
//             }
//              pq.pop();
            char ch=pq.top().second;
            int ct=pq.top().first;
            while(ct--)
                ans+=ch;
            pq.pop();
        }
        return ans;
    }
};