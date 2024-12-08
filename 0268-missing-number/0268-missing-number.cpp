class Solution {
public:
    int missingNumber(vector<int>&nums) {
        // for(int i=1;i<=nums.size();i++){
        //    bool flag = 0;
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==i){
        //             flag=1;
        //         }
        //     }
        //     if(flag==0){
        //         return i;
        //     }
        // }



        int s =nums.size();
        int hash[10001] = {0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=1;
        }
        for(int j=0;j<=nums.size();j++){
            if(hash[j]==0){
                return j;
            }
        }
        return 0;


    }    
    
};