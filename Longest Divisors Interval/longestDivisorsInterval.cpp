#include<iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long k = 1;
        while(n % k == 0){
            k++;
        }

        cout << k - 1 << endl;
    }



    return 0;
}
