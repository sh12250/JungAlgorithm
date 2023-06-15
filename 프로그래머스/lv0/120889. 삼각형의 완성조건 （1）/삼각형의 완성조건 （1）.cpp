#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int longSide = sides[0];
    
    if(longSide < sides[1]){
        sides[0] = sides[1];
        sides[1] = longSide;
        longSide = sides[1];
    }
    if(longSide < sides[2]){
        sides[0] = sides[2];
        sides[2] = longSide;
        longSide = sides[2];
    }
    
    if(sides[0] >= sides[1] + sides[2]){
        return 2;
    }
    else{
        return 1;
    }
}