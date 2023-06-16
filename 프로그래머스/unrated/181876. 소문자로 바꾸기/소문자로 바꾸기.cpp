#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] >= 65 && myString[i] <= 90)
        {
            myString[i] += 32;
        }
        answer += myString[i];
    }
    
    return answer;
}