#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = price;
    float salePer = 0;
    if(price / 500000 > 0)
    {
        salePer = 0.2f * price;
        answer -= salePer;
    }
    else if(price / 300000 > 0)
    {
        salePer = 0.1f * price;
        answer -= salePer;
    }
    else if(price / 100000 > 0)
    {
        salePer = 0.05f * price;
        answer -= salePer;
    }
    
    
    
    return answer;
}