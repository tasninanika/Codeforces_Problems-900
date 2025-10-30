#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int removals = 0;
        for(int i = 0; i < n; ){
            if(i + 4 < n && s.substr(i, 5) == "mapie"){
                removals++;
                i += 3;
            }
        }
    }



    return 0;
}
