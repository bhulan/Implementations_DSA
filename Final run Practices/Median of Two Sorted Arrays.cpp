class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>sum;
        double ans;
        for(int i=0;i<nums1.size();i++){
            sum.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            sum.push_back(nums2[i]);
        }
        sort(sum.begin(),sum.end());
        int l=sum.size();
        if(l%2!=0)
        ans=sum[l/2];
        else{
        double temp=(sum[l/2]+sum[(l/2)-1]);
        ans= temp/2;
        }
        return ans;
    }
};
