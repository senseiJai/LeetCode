class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i = 0;i<=30;i++){
            long long int ans = pow(3,i);
            if (n == ans){
                return true;
            }
        
        }
        return false;
    }
};