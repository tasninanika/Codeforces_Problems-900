#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        if(x > 45){
            cout << -1 << endl;
            return;
        }

        string result = "";
        int current_sum = x;

        for(int digit = 9; digit >= 1; digit--){
            if(current_sum >= digit){
                result = to_string(digit) + result;
                current_sum -= digit;
            }

            if(current_sum == 0){
                break;
            }
        }

        if(current_sum == 0){
            cout << result << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
