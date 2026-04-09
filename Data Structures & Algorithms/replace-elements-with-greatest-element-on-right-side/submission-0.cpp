class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        //vector<int> result(size);

        int maxToRight {-1}, resultMax {-1};

        for (int i = size-1; i >= 0; i-- )
        {
            //result[i] = maxToRight;
            maxToRight = max(maxToRight, arr[i]);
            arr[i] = resultMax;
            resultMax = maxToRight;
        }
        
        return arr;
    }
};