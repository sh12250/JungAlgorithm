#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string.find(alp, i) != -1)
        {
            if(my_string[my_string.find(alp, i)] >= 97 && my_string[my_string.find(alp, i)] <= 122)
            {
                my_string[my_string.find(alp, i)] -= 32;
            }
        }
    }
    
    return my_string;
}