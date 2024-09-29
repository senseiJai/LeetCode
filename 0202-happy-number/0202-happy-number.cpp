class Solution {
public:
    int Findsum(int &num){
        int sum=0;
        while(num!=0){
            int digit = num%10;
            num=num/10;
            sum+=digit*digit;
        }

        return sum;
    }
    bool isHappy(int n) {
        int ans=Findsum(n);
        while(ans!=1){
            ans=Findsum(ans);
            if(ans!=1&&ans<10){
                return false;
            }
        }
        return true;
    }
};