#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int pizza = 1;
    while(true)
    {
        if((pizza * 6) % n == 0)
        {
            return pizza;
        }
        pizza++;
    }
}