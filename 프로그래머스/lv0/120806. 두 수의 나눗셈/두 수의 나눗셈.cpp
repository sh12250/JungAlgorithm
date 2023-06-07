#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    float saveNum = (float)num1 / (float)num2;
    answer = saveNum * 1000;
    
    return answer;
}