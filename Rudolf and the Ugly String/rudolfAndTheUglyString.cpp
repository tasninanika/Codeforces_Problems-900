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
            else if(i + 2 < n && s.substr(i, 3) == "map"){
                removals++;
                i += 2;
            }
            else if(i + 2 < n && s.substr(i, 3) == "pie"){
                removals++;
            }
        }
    }



    return 0;
}
