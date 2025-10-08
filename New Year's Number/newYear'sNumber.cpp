#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n < 2020){
            cout << "NO" << endl;
            return;
        }

        int k = n / 2020;
        int b = n % 2020;

        if(b <= k){
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
