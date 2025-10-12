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

        int counts[26] = {0};
        for(int i = 0; i < n; i++){
            char c = s[i];
            counts[c - 'a']++;
        }

        int odd_counts = 0;
        for(int i = 0; i < 26; i++){
            if(counts[i] % 2 != 0){
                odd_counts++;
            }
        }

        int min_required_removals = max(0, odd_counts - 1);

        if(k >= min_required_removals){
            cout << "YES" << endl;
        }

    }


    return 0;
}
