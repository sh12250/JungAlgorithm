#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) 
{
    string answer = my_string;
    
    for (int i = 0; i < queries.size(); i++)
    {
        for (int j = 0; j < queries[i][1] - queries[i][0] + 1; j++)
        {
            answer[queries[i][0] + j] = my_string[queries[i][1] - j];
        }
        
        my_string = answer;
    }
    
    return answer;
}