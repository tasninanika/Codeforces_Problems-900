#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    map<string, int> freq;
    string ans;
    int m = 0;

    for(int i = 0; i < n - 1; i++){
        string sub = s.substr(i, 2);
        freq[sub]++;

        if (freq[sub] > m) {
            m = freq[sub];
            ans = sub;
        }
    }

    cout << ans << endl;

    return 0;
}
