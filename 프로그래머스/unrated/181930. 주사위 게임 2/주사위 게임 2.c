#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    if(a == b && b == c)
    {
        answer = (a * 3) * (a * a * 3) * (a * a * a * 3);
    }
    else if((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
    {
        answer = (a + b + c) * (a * a + b * b + c * c);
    }
    else
    {
        answer = (a + b + c);
    }
    
    
    return answer;
}