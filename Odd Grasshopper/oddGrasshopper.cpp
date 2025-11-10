#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll x0, n;
        cin >> x0 >> n;

        ll rem = n % 4;
        ll displacement = 0;

        if(rem == 1){
            displacement = n;
        }
        else if(rem == 2){
            displacement = -1;
        }
        else if(rem == 3){
            displacement = -(n + 1);
        }
        else{
            displacement = 0;
        }

        if(x0 % 2 == 0){
            cout << x0 + (-displacement) << endl;
        }
        else{
            cout << x0 + displacement << endl;
        }
    }

    return 0;
}
