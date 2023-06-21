#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int digit = 10;
    int saveNum = n;
    while(true)
    {
        if(n % digit != n)
        {
            digit *= 10;
        }
        else if(n % digit == n)
        {
            break;
        }
    }
    for(; digit != 1; digit /= 10)
    {
        answer += (saveNum / digit);
        saveNum -= (saveNum / digit) * digit;
    }
    
    answer += n % 10;
    
    
    return answer;
}