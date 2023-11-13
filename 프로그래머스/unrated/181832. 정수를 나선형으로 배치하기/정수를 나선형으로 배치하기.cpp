#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    
    for(int i = 0 ; i < n; i++){
        answer.push_back(vector<int>());
        for(int j = 0 ; j < n; j++){
            answer[i].push_back(0);
        }
    }
    
    int start = -1;
    int end = n;
    
    bool directionSide = true;
    int delta = 1;
    
    int currPos = 1;
    int row = 0;
    int col = 0;
    answer[row][col] = currPos;
    
    while(currPos!=n*n){
        if(directionSide){
            col += delta;
            if(col==end){
                col = end-delta;
                delta = 1;
                row += delta;
                directionSide = false;
            }
            else if(col==start){
                col = start-delta;
                delta = -1;
                row += delta;
                directionSide = false;
                start += 1;
            }
        }
        else{
            row += delta;
            if(row==end){
                row = end-delta;
                delta = -1;
                col += delta;
                directionSide = true;
                end -= 1;
            }
            else if(row==start){
                row = start-delta;
                delta = 1;
                col += delta;
                directionSide = true;
            }
        }
        currPos+=1;
        answer[row][col] = currPos;
    }
    
    
    return answer;
}
