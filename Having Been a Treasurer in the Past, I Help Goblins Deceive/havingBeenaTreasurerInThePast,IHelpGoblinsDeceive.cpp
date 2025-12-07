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

        long long dashes = 0;
        long long underscores = 0;

        for(char c : s){
            if(c == '-'){
                dashes++;
            }
            else{
                underscores++;
            }
        }

        long long left = dashes / 2;
        long long right = dashes - left;

        cout << underscores * left * right << "\n";
    }
    return 0;
}
