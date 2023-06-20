#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i = 0; i < numbers.size(); i++)
    {
        if(i == 0)
        {
            answer.assign(1,numbers[i] * 2);
            continue;
        }
        answer.push_back(numbers[i] * 2);
    }
    
    return answer;
}