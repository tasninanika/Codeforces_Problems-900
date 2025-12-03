#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int max_reach = 1000000;

        for(int i = 0; i < n; i++){
            int d, s;
            cin >> d >> s;

            int limit = d + (s - 1) / 2;
            max_reach = min(max_reach, limit);
        }

        cout << max_reach << endl;
    }
    return 0;
}
