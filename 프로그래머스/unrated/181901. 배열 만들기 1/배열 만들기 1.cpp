#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    
    answer.assign(n / k, 0);
    
    for(int i = 0; i < n / k; i++){
        answer[i] = k * (i + 1);
    }
    
    return answer;
}