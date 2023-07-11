#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    for(int i = 0; i < num_list.size() - 1; i++)
    {
        int minNum = num_list[i];
        
        for(int j = i + 1; j < num_list.size(); j++)
        {
            if(minNum > num_list[j])
            {
                num_list[i] = num_list[j];
                num_list[j] = minNum;
                minNum = num_list[i];
            }
        }
    }
    
    num_list.erase(num_list.begin());
    num_list.erase(num_list.begin());
    num_list.erase(num_list.begin());
    num_list.erase(num_list.begin());
    num_list.erase(num_list.begin());
    
    return num_list;
}