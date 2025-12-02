#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        long long w_min = (long long)n * (a - b);
        long long w_max = (long long)n * (a + b);
        long long t_min = c - d;
        long long t_max = c + d;

        if (w_max >= t_min && w_min <= t_max) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }


    return 0;
}
