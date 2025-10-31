#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<string> grid(8);
        for(int i = 0; i < 8; i++){
            cin >> grid[i];
        }

        bool solved = false;

        for(int i = 0; i < 8; i++){
            bool red_win = true;
            for(int j = 0; j < 8; j++){
                if(grid[i][j] != 'R'){
                    red_win = false;
                    break;
                }
            }
            if(red_win){
                cout << "R" << '\n';
                solved = true;
                break;
            }
        }

        if (solved) {
            continue;
        }

        for(int j = 0; j < 8; j++){
            bool blue_win = true;
            for(int i = 0; i < 8; i++){
                if(grid[i][j] != 'B'){
                    blue_win = false;
                    break;
                }
            }
            if(blue_win){
                cout << "B" << '\n';
                break;
            }
        }
    }

    return 0;
}
