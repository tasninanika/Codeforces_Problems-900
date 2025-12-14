#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        map<int, int> counts;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            counts[a[i]]++;
        }

        if(n == 1){
            cout << 0 << "\n";
            continue;
        }

        int max_freq = 0;
        for(auto const& [key, val] : counts){
            max_freq = max(max_freq, val);
        }

        if(max_freq == n){
            cout << 0 << "\n";
            continue;
        }

        int current_size = max_freq;
        int operations = 0;

        while(current_size < n){
            operations++;
            int elements_to_add = current_size;

            if(current_size + elements_to_add >= n){
                operations += (n - current_size);
                current_size = n;
            }
            else{
                operations += elements_to_add;
                current_size *= 2;
            }
        }

        cout << operations << "\n";
    }
    return 0;
}
