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
        for(int i = 0; i < 8; i++){
            bool red_win = true;
            for(int j = 0; j < 8; j++){
                if(grid[i][j] != 'R'){
                    red_win = false;
                    break;
                }
            }
            if(red_win){
                cout << "R" << endl;
                return;
            }
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
        }
    }




    return 0;
}
