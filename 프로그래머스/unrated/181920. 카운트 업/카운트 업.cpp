#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> answer;
    
    answer.assign(end - start + 1, 0);
    
    for(int  i = 0; i + start <= end; i++)
    {
        answer[i] = i + start;
    }
    
    return answer;
}