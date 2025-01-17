class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     if(nums.size()==1){
    //         return nums[0];
    //     }
    //     int ans=0;
    //     for(int i=0;i<nums.size();i++){
    //         ans^=nums[i];
    //     }
    //     return ans;
    // }
    map<long long, int> mp;
    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]++;
    }
    for(auto it : mp){
        if(it.second==1){
            return it.first;
        }
    }
    return 0;
    }

};