class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m= nums2.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            int j=0;
            for(;j<m;j++){
                if(nums1[i]==nums2[j]){
                    while(j<m-1 && nums1[i]>=nums2[j+1]){   
                        j++;
                    }
                    if(j>=m-1){
                        v.push_back(-1);
                        break;
                    }
                    else {
                        v.push_back(nums2[j+1]);
                        break;
                    }
                }
               
            }
             if(j>=m) v.push_back(-1);
        }
        return v;
    }
};