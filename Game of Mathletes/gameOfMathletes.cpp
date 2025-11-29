#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = 0;
        int r = n - 1;
        int ans = 0;

        while(l < r){
            long long sum = (long long)a[l] + a[r];
            if(sum == k){
                ans++;
                l++;
                r--;
            }
            else if(sum < k){
                l++;
            }
            else{
                r--;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
