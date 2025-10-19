#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    vector<int> a(12);
    int total_growth = 0;

    for(int i = 0; i < 12; i++){
        cin >> a[i];
        total_growth += a[i];
    }

    if(k == 0){
        cout << 0 << endl;
        return 0;
    }

    if(total_growth < k){

    }

    return 0;
}
