#include<iostream>
using namespace std;

int main(){
    string p;
    cin >> p;

    int c = 0;

    for(int i = 0; i < p.size(); i++){
        if(p[i] == "H" || p[i] == "Q" || p[i] == "9" || p[i] == "+"){
            c++;
        }
    }

    return 0;
}
