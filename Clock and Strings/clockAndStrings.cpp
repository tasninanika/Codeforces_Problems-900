#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a > b){
            swap(a, b);
        }
        if(c > d){
            swap(c, d);
        }

        bool c_in_ab = (a < c && c < b);
        bool d_in_ab = (a < d && d < b);

        if((c_in_ab && !d_in_ab) || (!c_in_ab && d_in_ab)){
            cout << "YES" << endl;
        }
    }



    return 0;
}
