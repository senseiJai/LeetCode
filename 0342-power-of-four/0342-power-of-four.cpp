class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 0;i<=30;i++){
           long long int ans = pow(4,i);
            if (n == ans){
                return true;
            }
        
        }
        return false;
    }
};