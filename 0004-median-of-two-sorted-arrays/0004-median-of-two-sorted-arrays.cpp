class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=m-1,j=n-1;
        vector<int> temp;
        // int k=m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                temp.push_back(nums1[i--]);
            }
            else{
                temp.push_back(nums2[j--]);
            }
        }
        while(i>=0){
            temp.push_back(nums1[i--]);
        }
        while(i>=0){
            temp.push_back(nums2[j--]);
        }
        sort(temp.begin(),temp.end());
        int s=0;
        int e=temp.size()-1;
        int mid=s+(e-s)/2;
        if(temp.size()&1){
            double y = temp[mid];
            return y;
        }
        else{
            double y= ((double)temp[mid]+temp[mid+1])/2;
            return y;
        }

        // return y;    
    }
};