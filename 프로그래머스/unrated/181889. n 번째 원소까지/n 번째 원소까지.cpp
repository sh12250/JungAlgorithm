#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    answer.assign(n, 0);
    
    for(int i = 0; i < n; i++){
        answer[i] = num_list[i];
    }
    
    return answer;
}