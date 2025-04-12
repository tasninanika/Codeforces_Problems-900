#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        int moves = 0;

        while(n != 1){
            if(n % 6 == 0){
                n /= 6;
                moves++;
            }
            else if(n % 3 == 0){
                n *= 2;
            }
        }


    }

    return 0;
}
