#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    answer.assign(queries.size(), 0);
    
    for(int i = 0; i < queries.size(); i++)
    {
        int targetNum = -1;
        
        for(int j = queries[i][0]; j <= queries[i][1]; j++)
        {
            int temp = arr[j];
            
            if(temp > queries[i][2])
            {
                if(targetNum == -1)
                {
                    targetNum = temp;
                }
                else if(targetNum != -1)
                {
                    targetNum = (targetNum < temp) ? targetNum : temp;
                }
            }
        }
        
        answer[i] = targetNum;
    }
    
    return answer;
}