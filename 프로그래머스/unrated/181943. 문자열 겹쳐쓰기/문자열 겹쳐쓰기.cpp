#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for(int i = 0; i < s; i++)
    {
        answer += my_string[i];
    }
    
    answer += overwrite_string;
    
    for(int i = s + overwrite_string.size(); i < my_string.size(); i++)
    {
        answer += my_string[i];
    }
    
    
    return answer;
}