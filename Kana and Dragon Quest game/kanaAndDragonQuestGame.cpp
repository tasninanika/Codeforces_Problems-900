#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long x, n, m;
        cin >> x >> n >> m;

        while(n > 0 && x > 20){
            x = x / 2 + 10;
            n--;
        }
    }




    return 0;
}
