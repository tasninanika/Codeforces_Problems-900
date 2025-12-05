#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        bool possible = false;
        long long power_of_ten = 10;

        for (int k = 1; k <= 18; ++k) {
            long long divisor = power_of_ten + 1;

            if (n % divisor == 0) {
                long long x = n / divisor;
                if (x % 10 != 0) {
                    possible = true;
                    break;
                }
            }
            if (k < 18) {
                power_of_ten *= 10;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}
