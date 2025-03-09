#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;

        while (n % 2 == 0){
            n /= 2;
        }

        if(n == 1){
            cout << "NO" << endl;
        }
    }

    return 0;
}
