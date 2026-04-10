class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        bool result = false;

        for (char c : s)
        {
            if (c == ')' && !brackets.empty() && brackets.top() == '(')
            {
                brackets.pop();
            }
            else if (c == '}' && !brackets.empty() && brackets.top() == '{')
            {
                brackets.pop();
            }
            else if (c == ']' && !brackets.empty() && brackets.top() == '[')
            {
                brackets.pop();
            }
            else if (c == '(' || c == '{' || c == '[')
            {
                brackets.push(c);
            }
            else
            {
                return false;
            }
        }

        if (brackets.empty())
        {
            result = true;
        }

        return result;
    }
};
