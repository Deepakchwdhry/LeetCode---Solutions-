class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int left = 0;
        int right = 0;
        double median = 0;
        vector<int>arr;

        while(left<nums1.size()&& right <nums2.size()){
            if(nums1[left]<=nums2[right]){
                 arr.push_back(nums1[left]);
                 left++;}
            else {
                arr.push_back(nums2[right]);
                right++;}
        }
        while(left<nums1.size()){
            arr.push_back(nums1[left]);
            left++;
        }
        while(right<nums2.size()){
            arr.push_back(nums2[right]);
            right++;
        }
        int n = arr.size();
       if(n%2==0){
        median = (arr[(n/2)-1]+arr[n/2])/2.0;
       }
       else{
        median = arr[n/2];
       }
        return median;
    }
};