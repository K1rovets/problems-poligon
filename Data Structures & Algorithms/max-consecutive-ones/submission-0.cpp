class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result {0};
        int count {0};
        for (int i : nums)
        {
            if (i == 1) 
            {
                count++;
            }
            else 
            {
                result = max(result, count);
                count = 0;
            }
        }

        return max(result, count);
    }
};