class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     int count = 0;
        //     if(nums[i]==(nums[i+1]-1)){
        //         count++;
        //     }
        //     else{
        //         return count+1;
        //     }
        // }
        for(int i=1;i<=nums.size();i++){
           bool flag = 0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                }
            }
            if(flag==0){
                return i;
            }
        }
        return 0;
    }    
    
};