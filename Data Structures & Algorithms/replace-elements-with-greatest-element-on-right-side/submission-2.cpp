class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        int maxToRight {-1}, resultMax {-1};

        for (int i = size-1; i >= 0; i-- )
        {
            maxToRight = max(maxToRight, arr[i]);
            arr[i] = resultMax;
            resultMax = maxToRight;
        }

        return arr;
    }
};