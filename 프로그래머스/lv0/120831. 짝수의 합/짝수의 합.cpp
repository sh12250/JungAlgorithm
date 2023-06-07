#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = (n % 2); i <= n; i += 2)
    {
        if(n % 2 == 1)
        {
            i++;
        }
        answer += i;
    }
    if(n == 1){
        return 0;
    }
    
    return answer;
}