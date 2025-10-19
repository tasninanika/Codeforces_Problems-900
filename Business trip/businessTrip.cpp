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
        cout << -1 << endl;
        return 0;
    }

    sort(a.rbegin(), a.rend());

    int current_growth = 0;
    int months = 0;

    for(int i = 0; i < 12; i++){
        if(current_growth >= k){
            break;
        }
        current_growth += a[i];
        months++;
    }

    return 0;
}
