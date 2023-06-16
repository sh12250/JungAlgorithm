#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 1; i <= n; i += 2)
    {
        if(i == 1)
        {
            answer.assign(1, i);
            continue;
        }
        answer.push_back(i);
    }
    
    
    
    return answer;
}