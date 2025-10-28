#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> x(n);
        for(int i = 0; i < n; i++){
            cin >> x[i];
        }

        long long total_time = b;
        long long max_increase = a - 1;

        for(int i = 0; i < n; i++){
            total_time += min(x[i], max_increase);
        }
        cout << total_time << endl;
    }


    return 0;

}
