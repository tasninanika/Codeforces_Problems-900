#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long c1 = 0;
        long long c0 = 0;

        for(int i = 0; i < n; i++){
            int a;
            cin >> a;

            if(a == 1){
                c1++;
            }
            else if(a == 0){
                c0++;
            }
        }

        long long ans = c1 * (1LL << c0);

        cout << ans << endl;
    }
    return 0;
}
