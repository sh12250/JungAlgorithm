#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 0;
    int pizza = 1;
    while(true)
    {
        if(slice * pizza < n)
        {
            pizza++;
        }
        else if(slice * pizza >= n)
        {
            answer = pizza;
            break;
        }
    }
    
    
    return answer;
}