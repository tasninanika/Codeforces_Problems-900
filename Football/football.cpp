#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;

    int z = 0, o = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            o++;
            z = 0;
        }
        else{
            z++;
            o = 0;
        }
        if(z == 7 || o == 7){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;


    return 0;
}
