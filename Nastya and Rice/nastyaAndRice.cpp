#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        long long min_possible = n * (a - b);
        long long max_possible = n * (a + b);

        if (max_possible >= c && min_possible <= d) {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }
    }


    return 0;
}
