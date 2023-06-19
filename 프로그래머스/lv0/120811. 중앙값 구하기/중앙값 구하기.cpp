#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    for(int i = 0; i < array.size(); i++)
    {
        int left = 0;
        int right = 0;
        for(int j = 0; j < array.size(); j++)
        {
            if(array[i] > array[j])
            {
                left++;    
            }
            else if(array[i] < array[j])
            {
                right++;
            }
            
            if(left == array.size() / 2 && right == array.size() / 2 && left == right)
            {
                return array[i];
            }
        }
    }
    
    
    
    
}