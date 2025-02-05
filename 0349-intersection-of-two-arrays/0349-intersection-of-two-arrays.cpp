class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      /* sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    vector<int> res;
    int i = 0, j = 0;
    while (i < nums1.size() and j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            res.push_back(nums1[i]);
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    vector<int> ans;
     for (int i = 0; i < res.size(); i++) {
        if (i>0 and res[i] == res[i - 1]) {
            continue; // Skip duplicates
        }
        ans.push_back(res[i]);
    }
    return ans;*/
    int n=nums1.size();
    vector<int>res;
    unordered_set<int>st;
     unordered_set<int>st1;
    for(int i=0;i<n;i++){
        st.insert(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++){
        st1.insert(nums2[i]);
    }

    for(auto it: st1){
        if(st.find(it)!=st.end()){
            res.push_back(it);
        }
    }
    return res;
}
};