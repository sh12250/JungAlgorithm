#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) 
{
    for (int i = 0; i < my_string.size(); i++)
    {
        string strTemp_ = my_string.substr(i);
        
        if (is_suffix == strTemp_)
        {
            return 1;
        }
    }
    
    return 0;
}