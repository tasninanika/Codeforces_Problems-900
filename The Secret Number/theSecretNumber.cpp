#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long power_of_ten = 1;

        for (int k = 0; k <= 9; ++k) {
            long long divisor = 1 + power_of_ten;

            if ((long long)n % divisor == 0) {
                cout << "Yes" << endl;
                continue;
            }

            if (k < 9) {
                power_of_ten *= 10;
            }
        }

        cout << "No" << endl;
    }
    return 0;
}
