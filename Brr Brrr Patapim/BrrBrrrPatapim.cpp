#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p_elements;

        for(int i = 0; i < n; i++){
            int max_val = 0;

            for(int j = 0; j < n; j++){
                int a_ij;
                cin >> a_ij;

                max_val = max(max_val, a_ij);
            }

            p_elements.push_back(max_val - n);
        }

        for (int i = 0; i < n; ++i) {
            cout << p_elements[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
