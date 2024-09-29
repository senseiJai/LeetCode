class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0;i<=30;i++){
            int ans = pow(2,i);
            if (n == ans){
                return true;
            }
        
        }
        return false;
    //     if(n==0){
    //         return 0;
    //     }
    //     if((n&(n-1))==0){
    //         return 1;
    //     }
    //     return 0;
    // 
    }

};