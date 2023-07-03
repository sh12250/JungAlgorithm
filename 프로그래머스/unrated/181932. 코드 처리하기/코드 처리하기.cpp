#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    int mode = 0;
    
    for(int i = 0; i < code.size(); i++)
    {
        switch(mode)
        {
            case 0:
                if(code[i] == '1')
                {
                    mode = 1;
                }
                else
                {
                    if(i % 2 == 0)
                    {
                        answer.push_back(code[i]);
                    }
                }
                break;
            case 1:
                if(code[i] == '1')
                {
                    mode = 0;
                }
                else
                {
                    if(i % 2 == 1)
                    {
                        answer.push_back(code[i]);
                    }
                }
                break;
        }
    }
    
    if(answer.size() == 0)
    {
        return "EMPTY";
    }
    
    return answer;
}