#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    const int MAX_N = 3000;

    vector<int> distinct_prime_factor_count(MAX_N + 1, 0);

    for(int i = 2; i <= MAX_N; i++){
        if(distinct_prime_factor_count[i] == 0){
            for(int j = i; j <= MAX_N; j += i){
                distinct_prime_factor_count[j]++;
            }
        }
    }

    int almost_prime_result = 0;
    for(int i = 1; i <= n; i++){

    }




    return 0;
}
