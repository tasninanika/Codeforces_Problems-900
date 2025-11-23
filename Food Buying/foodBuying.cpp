#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long s;
        cin >> s;

        long long totalSpent = 0;

        while(s >= 10){
            long long x = s / 10 * 10;

            totalSpent += x;
            s = (s % 10) + (s / 10);
        }

        totalSpent += s;

        cout << totalSpent << "\n";
    }

    return 0;
}
