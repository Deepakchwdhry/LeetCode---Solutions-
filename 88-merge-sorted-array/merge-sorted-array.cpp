class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int low = 0;
        int high = 0;
        
        vector<int>ans;
        while(low<m && high<n){
            if(nums1[low]<nums2[high]){
                ans.push_back(nums1[low]);
                low++;
            }
            else{
                ans.push_back(nums2[high]);
                high++;
            }
            
        }
        while(low<m){
            ans.push_back(nums1[low]);
            low++;
        }
        while(high<n){
            ans.push_back(nums2[high]);
            high++;
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }
    }
};