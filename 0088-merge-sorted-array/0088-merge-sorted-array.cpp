class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n==0)
        return;
        int j=m;
        int k=0;
        for(int i=0;i<m;i++){
            if(nums1[i]<nums2[k] and k<n and j<m+n){
               int  tmp=nums1[i];
               nums1[i]=nums2[k];
               nums1[j]=tmp
               k++;
               j++;
            }
        }







    }
};