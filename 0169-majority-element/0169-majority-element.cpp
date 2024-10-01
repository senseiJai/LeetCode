class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int , int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto i:mpp){
        //     if(i.second>nums.size()/2){
        //         return i.first;
        //     }
        // }
        // return -1;
        int count=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(count ==0 ){
                count = 1;
                el=nums[i];
            }
            else if(nums[i]==el){
                count++;
            }
            else count--;
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1>nums.size()/2){
                return el;
            }
        return -1;
    }
};