#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long total_sum = n * (n + 1) / 2;
        long long current_power = 1;
        long long sum_powers_of_two = 0;

        while(current_power <= n){
            sum_powers_of_two += current_power;
            current_power *= 2;
        }

        cout << total_sum - 2 * sum_powers_of_two << endl;
    }

    return 0;
}
