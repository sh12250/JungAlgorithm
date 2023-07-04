#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    
    answer.assign(start - end + 1, 0);
    
    for(int i = 0; i < start - end + 1; i++)
    {
        answer[i] = start - i;
    }
    
    return answer;
}