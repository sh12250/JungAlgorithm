#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int oddSum = 0;
    int evenSum = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        if(num_list[i] % 2 == 0)
        {
            evenSum *= 10;
            evenSum += num_list[i];
        }
        else
        {
            oddSum *= 10;
            oddSum += num_list[i];
        }
    }
    
    
    return oddSum + evenSum;
}