#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;

        if(a == b){
            cout << "0 0\n";
            continue;
        }

        long long diff = abs(a - b);
        long long remainder = a % diff;

        long long moves1 = remainder;
        long long moves2 = diff - remainder;

        long long min_moves = min(moves1, moves2);

        cout << diff << " " << min_moves << "\n";
    }

    return 0;
}
