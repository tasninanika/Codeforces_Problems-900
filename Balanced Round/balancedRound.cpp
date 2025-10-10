#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int max_count = 0;
        int current_count = 0;

        for(int i = 0; i < n; i++){
            if(i == 0){
                current_count = 1;
            }
            else{
                if(a[i] - a[i - 1] <= k){
                    current_count++;
                }
            }
            max_count = max(max_count, current_count);
        }
    }



    return 0;
}
