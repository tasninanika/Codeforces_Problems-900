#include<iostream>
using namespace std;

int main(){
    long long n, k, p, num;
    cin >> n >> k;


    if(n % 2 == 0){
        p = n / 2;
    }
    else{
        p = (n / 2) + 1;
    }

    if(k <= p){
        num = (2 * k) - 1;
    }
    else{
        num = (k - p) * 2;
    }

    cout << num << endl;


    return 0;
}
