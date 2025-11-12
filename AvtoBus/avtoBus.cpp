#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n % 2 != 0 || n < 4){
            cout << -1 << endl;
            continue;
        }

        long long min_buses;
        long long max_buses;

        max_buses = n / 4;

        min_buses = (n + 4) / 6;

        cout << min_buses << " " << max_buses << endl;
    }

    return 0;
}
