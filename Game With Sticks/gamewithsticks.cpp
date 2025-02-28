#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    if(n % 2 != 0 && m % 2 != 0){
        cout << "Akshat" << endl;
    }
    else if (n == 1 || m == 1){
        cout << "Akshat" << endl;
    }
    else{
        cout << "Malvika" << endl;
    }

    return 0;
}
