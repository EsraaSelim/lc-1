class Solution {
public:
    int mySqrt(int x) {
        int low  = 1;
        int high = x;
        long mid;
        while (low < high){
            mid = low + (high - low)/2;
            if (mid * mid <= x && ((mid+1) * (mid+1)) > x)
                return (int)mid;
            else if (mid * mid < x)
                low = mid;
            else
                high = mid;
        }
        if (high * high == x)
            return high;
        else
            return low;
    }
};