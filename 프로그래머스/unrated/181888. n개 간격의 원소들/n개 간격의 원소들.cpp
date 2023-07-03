#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    answer.assign((num_list.size() - 1) / n + 1, 0);
    
    for(int i = 0; i < ((num_list.size() - 1) / n + 1); i++)
    {
        answer[i] = num_list[i * n];
    }
    
    return answer;
}