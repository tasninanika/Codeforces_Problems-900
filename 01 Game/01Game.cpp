#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int c = 0, c1 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                c++;
            }
            else if(s[i] == '1'){
                c1++;
            }
        }

        int pairs = min(c, c1);
        if(pairs % 2 == 1){
            cout << "DA" << endl;
        }
        else{
            cout << "NET" << endl;
        }
    }


    return 0;
}
