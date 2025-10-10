#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t = 1;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        ll arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll curr = 1, total = 0;
        sort(arr, arr + n);

        for(int i = 0; i < n - 1; i++){
            if{(abs(arr[i] - arr[i + 1]) <= k)
                curr++;
            }
            else{
                total = max(total, curr);
                curr = 1;
            }
        }

        total = max(total, curr);

        cout << n - total << endl;
    }
}
