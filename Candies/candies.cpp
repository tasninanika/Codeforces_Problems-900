#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for (int k = 3; k <= n; k = k * 2 + 1) {
            if (n % k == 0) {
                cout << n / k << endl;
                return;
            }
        }
    }

    return 0;
}
