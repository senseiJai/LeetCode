class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int s=0; 
        int e=nums.size()-1;
        while(s<e){
            swap(nums[s++],nums[e--]);
        }
        int st=k;
        int en=nums.size()-1;
        while(st<en){
            swap(nums[st++],nums[en--]);
        }
        int start=0;
        int end=k-1;
        while(start<end){
            swap(nums[start++],nums[end--]);
        }
    }
};