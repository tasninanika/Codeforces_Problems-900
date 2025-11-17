#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++){
            cin >> p[i];
        }

        int result_gcd = 0;

        for(int i = 0; i < n; i++){
            int displacement = abs(p[i] - (i + 1));

            if(displacement != 0){
                if(result_gcd == 0){
                    result_gcd = displacement;
                }
                else {
                    result_gcd = gcd(result_gcd, displacement);
                }
            }
        }

        cout << result_gcd << "\n";
    }

    return 0;
}
