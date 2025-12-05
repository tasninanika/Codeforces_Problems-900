#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long final_xor_sum = 0;
        long long current_val;

        for(int i = 0; i < n; i++){
            cin >> current_val;
            final_xor_sum ^= current_val;
        }

        cout << final_xor_sum << endl;

        for(int i = 1; i <= n; i++){
            cout << i << (i == n ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
