class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k{0};
        int size = nums.size();
        int i{0};

        while (i < size)
        {
            if (nums[i] == val)
            {
                nums[i] = nums[--size];
            }
            else 
            {
                i++;
            }
        }        

/**        for (int i = 0; i < size; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }**/

        return size;
    }
};