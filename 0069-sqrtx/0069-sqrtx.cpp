class Solution {
public:
    int mySqrt(int x) {
        int low=0,high =x;
        while(low<=high){
            int mid=(low+high)/2;
                        long long square = (long long)mid * mid;

            if (square == x) return mid;
            else if (square < x) low = mid + 1;
            else high = mid - 1;
             
                 }
       return high;          
    }
};