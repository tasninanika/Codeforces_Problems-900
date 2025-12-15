#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long n;
        cin >> n;

        string s;
        cin >> s;

        string result(n, 'a');
        result[n - 1] = 'b';

        cout << result << "\n";
    }
    return 0;
}
