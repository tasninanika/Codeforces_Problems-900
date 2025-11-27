#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string decoded = "";

    for(int i = 0; i < n; i++){
        if((n - i) % 2 != 0){
            decoded += s[i];
        }
        else{
            decoded = s[i] + decoded;
        }
    }

    cout << decoded << endl;

    return 0;
}
