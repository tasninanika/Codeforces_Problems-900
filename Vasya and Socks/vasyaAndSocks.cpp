#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int c = n;
    while(n >= m){
        c += n / m;
        n = (n / m) + (n % m);
    }


    return 0;
}

