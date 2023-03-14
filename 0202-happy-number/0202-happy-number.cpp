class Solution {
public:
    int sum_square(int n){
        int sum = 0 , rem;
        while(n != NULL){
            rem = n % 10;
            sum += rem * rem;
            n /= 10;
         }
        return sum;
    }
    bool isHappy(int n) {
        int s = n;
        while (s != 1 && s != 4)
            s = sum_square(s);
        if (s == 1 )
            return true;
        else
            return false;
    }   
};