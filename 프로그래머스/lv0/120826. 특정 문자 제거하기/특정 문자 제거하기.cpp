#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    while(true)
    {
        if(my_string.find(letter) == -1)
        {
            break;
        }
        my_string.erase(my_string.find(letter), letter.length());
    }
    string answer = my_string;
    return answer;
}