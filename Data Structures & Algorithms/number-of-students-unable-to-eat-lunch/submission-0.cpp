class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> studentPrefer(2);
        int size = students.size();

        for (int student : students)
        {
            studentPrefer[student]++;        
        }

        for (int sandwich : sandwiches)
        {
            if (studentPrefer[sandwich] > 0)
            {
                studentPrefer[sandwich]--;
                size--;
            }
            else 
            {
                break;
            }
        }  
        return size;
    }
};