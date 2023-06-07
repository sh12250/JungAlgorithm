#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string saveStr = my_string;
    for(int j = 0; j < my_string.length(); j++)
    {        
        for(int i = my_string.length(); i >= 0; i--)
        {
            my_string.erase(j, 1);
            my_string.push_back(saveStr[i]);
        }
    }

    string answer = my_string;
    
    
    return answer;
}