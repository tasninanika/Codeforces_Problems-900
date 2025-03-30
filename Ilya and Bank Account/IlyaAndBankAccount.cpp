#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n > 0){
        cout << n << endl;
    }
    else if(n < 0){
        int n1 = n / 10;
        int n2 = n / 100;
    }

    return 0;
}
