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

    }


    return 0;
}
