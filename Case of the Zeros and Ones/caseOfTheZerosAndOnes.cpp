#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int c = 0;
    int c1 = 0;

    for(int i = 0; i < s.size(); i++){
        if(c == '0'){
            c++;
        }
        else{
            c1++;
        }
    }

    cout << abs(c - c1) << endl;


    return 0;
}
