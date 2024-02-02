#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e)
{
    string answer = my_string;
    
    for (int i = s; i < e + 1; i++)
    {
        answer[i] = my_string[s + e - i];
    }
    
    return answer;
}