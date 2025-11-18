#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long x;
        cin >> n >> x

        long long total_sum = 0;
        long long max_sum = 0;

        for(int i = 0; i < n; i++){
            long long a;
            cin >> a

            total_sum += a;
            max_sum += (a + x - 1) / x;
        }
    }




    return 0;
}
