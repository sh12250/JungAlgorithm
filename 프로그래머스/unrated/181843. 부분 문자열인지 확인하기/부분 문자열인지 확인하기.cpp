#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    if(my_string.find(target) != -1)
    {
        return 1;
    }
    
    return 0;
}