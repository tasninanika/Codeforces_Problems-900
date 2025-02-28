#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int moves = min(n, m);

    if(moves % 2 != 0){
        cout << "Akshat" << endl;
    }
    else{
        cout << "Malvika" << endl;
    }

    return 0;
}
