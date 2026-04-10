class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> record;
        int result{0};

        for (string operation : operations)
        {
            if (operation == "+")
            {
                int top = record.top();
                record.pop();
                int prevTop = record.top();
                record.push(top);
                record.push(top + prevTop);
            }
            else if (operation == "D") 
            {
                record.push(record.top()*2);
            }
            else if (operation == "C")
            {
                record.pop();
            }
            else 
            {
                record.push(stoi(operation));
            }
        }

        while (!record.empty())
        {
            result += record.top();
            record.pop();
        }

        return result;
    }
};