class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int c[n+m];int k=0,i=0,j=0;
        while(i<m)
        {
         c[k++]=a[i++];        
        }
        while(j<n)
        {
        c[k++]=b[j++];        
        }
        sort(c,c+n+m);
        
    }
};