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
    void merge(vector<Pair>& pairs, int start, int mid, int end)
    {
        vector<Pair> left(pairs.begin() + start, pairs.begin() + mid + 1);
        vector<Pair> right(pairs.begin() + mid + 1, pairs.begin() + end + 1);
        int leftSize = left.size();
        int rightSize = right.size();

        int res = start, i = 0, j = 0;

        while (i < leftSize && j < rightSize)
        {
            if (left[i].key <= right[j].key) {
                pairs[res] = left[i++];
            }
            else
            {
                pairs[res] = right[j++];
            }
            res++;
        }

        while (i < leftSize)
        {
            pairs[res++] = left[i++];
        }
        while (j < rightSize)
        {
            pairs[res++] = right[j++];
        }
    }

    vector<Pair> mergeSortHelper(vector<Pair>& pairs, int start, int end)
    {
        if (start >= end)
        {
            return pairs;
        }

        int m = start + (end - start) / 2;

        mergeSortHelper(pairs, start, m);
        mergeSortHelper(pairs, m + 1, end);

        merge(pairs, start, m, end);
        return pairs;
    }

        vector<Pair> mergeSort(vector<Pair>& pairs) {
            return mergeSortHelper(pairs, 0, pairs.size()-1);
    }
};
