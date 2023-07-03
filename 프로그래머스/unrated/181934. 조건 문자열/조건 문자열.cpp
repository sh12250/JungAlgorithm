#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    switch(ineq[0])
    {
        case '>':
            if(eq[0] == '=')
            {
                if(n >= m)
                {
                    return 1;
                }
                return 0;
            }
            else
            {
                if(n > m)
                {
                    return 1;
                }
                return 0;
            }
        case '<':
            if(eq[0] == '=')
            {
                if(n <= m)
                {
                    return 1;
                }
                return 0;
            }
            else
            {
                if(n < m)
                {
                    return 1;
                }
                return 0;
            }
    }
}