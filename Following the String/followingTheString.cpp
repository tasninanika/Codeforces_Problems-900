#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> count(n + 1, 0);
        string result = "";

        for(int i = 0; i < n; i++){
            int trace_value;
            cin >> trace_value;

            char next_char = 'a' + count[trace_value];
            result += next_char;
            count[trace_value]++;
        }
        cout << result << "\n";
    }





    return 0;
}
