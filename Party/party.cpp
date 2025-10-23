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

            vector<int> path;

            while(current_employee != -1 && depth[current_employee] == 0){
                path.push_back(current_employee);
                current_employee = employees[current_employee];
            }

            int base_depth = (current_employee == -1) ? 0 : depth[current_employee];

            for(int j = path.size() - 1; j >= 0; j--){
                base_depth++;
                depth[path[j]] = base_depth;
                max_depth = max(max_depth, base_depth);
            }
        }
    }

    cout << max_depth << endl;

    return 0;
}
