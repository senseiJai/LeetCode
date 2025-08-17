class Solution {
public:
    bool isPowerOfThree(int n) {
        // for(int i = 0;i<=30;i++){
        //     long long int ans = pow(3,i);
        //     if (n == ans){
        //         return true;
        //     }
        
        // }
        // return false;
        if (n == 1) return true;
        if (n <= 0 || n % 3 != 0) return false;

        return isPowerOfThree(n/3);
    }
};