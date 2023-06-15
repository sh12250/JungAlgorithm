#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int bigNum = 0;
    int secondNum = 0;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] > bigNum)
        {
            secondNum = bigNum;
            bigNum = numbers[i];
        }
        else if(numbers[i] > secondNum)
        {
            secondNum = numbers[i];
        }
    }
    
    return bigNum * secondNum;
}