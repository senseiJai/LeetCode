class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> ans;
        // for (int i=0;i<nums.size();i++){
        //     for (int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        // return ans;
        // map <int , int> mp;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]=i;
        // }
        // sort(nums.begin(),nums.end());
        // int i=0;
        // int j=nums.size()-1;
        // while (i<j){
        //     int sum=nums[i]+nums[j];
        //     if(sum==target){
        //         ans.push_back(mp[nums[i]]);
        //         ans.push_back(mp[nums[j]]);
        //         break;
        //     }
        //     if(sum>target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return ans;
        map<int , int> mp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                return {mp[rem],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};