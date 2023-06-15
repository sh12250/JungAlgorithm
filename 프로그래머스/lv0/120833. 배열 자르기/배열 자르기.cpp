#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    answer.assign(1, numbers[num1]);
    for(int i = num1 + 1; i < num2 + 1; i++){
        answer.push_back(numbers[i]);
    }
    
    
    
    return answer;
}