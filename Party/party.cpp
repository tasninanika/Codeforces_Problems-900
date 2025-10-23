#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> employees(n + 1);
    vector<int> depth(n + 1, 0);

    for(int i = 1; i <= n; i++){
        cin >> employees[i];
    }
    int max_depth = 0;
    for(int i = 1; i <= n; i++){
        if(depth[i] == 0){
            int current_employee = i;
            int current_path_length = 0;
        }
    }



    return 0;
}
