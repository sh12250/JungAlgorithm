#include <string>
#include <vector>

using namespace std;

int solution(string number) 
{
    int answer = 0;

    for (int i = 0; i < number.size(); i++)
    {
        answer += static_cast<int>(number[i]- '0');
    }
    
    return answer % 9;
}