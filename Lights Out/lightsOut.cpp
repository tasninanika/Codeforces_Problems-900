#include<bits/stdc++.h>
using namespace std;

void toggle(int final_grid[3][3], int r, int c){
    if(r >= 0 && r < 3 && c >= 0 && c < 3){
        final_grid[r][c] = 1 - final_grid[r][c];
    }
}

int main(){
    int input_grid[3][3];
    int final_grid[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> input_grid[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(input_grid[i][j] % 2 != 0){
                toggle(final_grid, i, j);
            }
        }
    }


    return 0;
}
