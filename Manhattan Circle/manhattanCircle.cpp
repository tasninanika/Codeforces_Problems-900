#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        int min_r = numeric_limits<int>::max();
        int max_r = numeric_limits<int>::min();
        int min_c = numeric_limits<int>::max();
        int max_c = numeric_limits<int>::min();

        for(int i = 0; i < n; i++){
            string row;
            cin >> row;

            for(int j = 0; j < m; j++){
                if(row[j] == '#'){
                    min_r = min(min_r, i);
                    max_r = max(max_r, i);
                }
            }
        }
    }


    return 0;
}
