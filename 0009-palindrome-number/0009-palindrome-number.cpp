class Solution {
public:
    bool isPalindrome(int x) {
        // if(x<0){
        //     return false;
        // }
        // long long int reversed=0;
        // long long int copy=x;
        // while(copy!=0){
        //     int digit = copy%10;
        //     reversed = reversed * 10 + digit;
        //     copy /= 10; 
        // }
        // return (reversed == x);
        
        if(x < 0) return false;
        long long y = x;
        long long y1 = 0;
        while(x)
        {
            y1 = y1*10 + x%10;
            x /= 10;
        }
        return y == y1;
        
    }
    
};