class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=(matrix.size()*matrix[0].size())-1;
        if(!matrix.size()||!matrix[0].size()) return false;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target) {
                return true;
            }
            if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        return false;
    }
};