#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> evens;
        vector<int> odds;

        for(int i = 0; i < n; i++){
            cin >> a[i];

            if(a[i] % 2 == 0){
                evens.push_back(a[i]);
            }
            else{
                odds.push_back(a[i]);
            }
        }

        vector<int> sorted_a = evens;
        sorted_a.insert(sorted_a.end(), odds.begin(), odds.end());

        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(sorted_a[i], 2 * sorted_a[j]) > 1){

                }
            }
        }
    }



    return 0;
}
