#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long l, r, a;
        cin >> l >> r >> a;

        long long ans = r / a + r % a;

        long long m = (r / a) * a - 1;

        if (m >= l) {
            ans = max(ans, m / a + m % a);
        }
    }




    return 0;
}
