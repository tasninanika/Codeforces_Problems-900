#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int c0 = 0;
        int c1 = 0;
        for(char c : s){
            if (c == '0') {
                c0++;
            }
            else {
                c1++;
            }
        }

        int k_max = (c0 / 2) + (c1 / 2);
        int k_min = abs(c0 - c1) / 2;

        if (k >= k_min && k <= k_max) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
