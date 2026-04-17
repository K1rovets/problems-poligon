class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> nums1Temp (nums1.begin(), nums1.begin() + m);
        int i{0}, j{0}, res{0};
        int maxLength = m + n;

        while (res < maxLength)
        {
            if ( j >= n || (i < m && nums1Temp[i] <= nums2[j]))
            {
                nums1[res] = nums1Temp[i++]; 
            }
            else
            {
                nums1[res] = nums2[j++];
            }
            res++;
        }
    }
};