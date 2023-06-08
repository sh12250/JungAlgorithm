#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    const int ICEAMERICANO = 5500;
    vector<int> answer;
    answer.assign(1, money / ICEAMERICANO);
    answer.push_back(money % ICEAMERICANO);
    
    
    return answer;
}