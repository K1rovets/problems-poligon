// Definition for a Pair
// class Pair {
// public:
//     int key;
//     string value;
//
//     Pair(int key, string value) : key(key), value(value) {}
// };
class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        int size = pairs.size();
        vector<vector<Pair>> result;
        if (size == 0)
        {
            return result;
        }        
        result.push_back(pairs);
        for (int i = 1; i < size; i++)
        {
            int j = i - 1;
            while (j >= 0 && pairs[j+1].key < pairs[j].key)
            {
                cout << "Before " << j << ": " << pairs[j].key << " : " << pairs[j+1].key << endl;
                Pair temp = pairs[j+1];
                pairs[j+1] = pairs[j];
                pairs[j] = temp;
                cout << "After " << j << ": " << pairs[j].key << " : " << pairs[j+1].key << endl;
                j--;
                
            }
            result.push_back(pairs);
        }
        return result;
    }


    vector<int> insertionSortBasic(vector<int>& arr) {
        int size = arr.size();
        for (int i = 1; i < size; i++)
        {
            int j = i - 1;
            while (j >= 0 && arr[j+1] < arr[j])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
        return arr;
    }
};
