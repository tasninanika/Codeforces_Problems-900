#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 0){
            cout << 1 << endl;
            break;
        }

        int max_run = 1;
        int current_run = 1;

        for(int i = 1; i < n; i++){
            if(s[i] == s[i - 1]){
                current_run++;
            }
            else{
                current_run = 1;
            }

            max_run = max(max_run, current_run);
        }
        cout << max_run + 1 << endl;
    }

    return 0;
}
