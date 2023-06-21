#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int poweredTotal = 0;
    int multiplyAll = 0;
    
    for(int i = 0; i < num_list_len; i++)
    {
        if(i == 0)
        {
            poweredTotal = num_list[i];
            multiplyAll = num_list[i];
        }
        else
        {
            poweredTotal += num_list[i];
            multiplyAll *= num_list[i];
        }
    }
    poweredTotal *= poweredTotal; 
    
    if(poweredTotal > multiplyAll)
    {
        return 1;
    }
    
    
    return answer;
}