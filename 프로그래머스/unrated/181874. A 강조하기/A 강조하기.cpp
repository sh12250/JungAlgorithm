#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] >= 'A' && myString[i] <= 'Z')
        {
            if(myString[i] != 'A')
            {
                myString[i] += 32;
            }
        }
        else if(myString[i] == 'a')
        {
            myString[i] -= 32;
        }
    }
    
    return myString;
}