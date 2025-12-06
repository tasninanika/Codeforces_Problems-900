#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<long long> p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p.rbegin(), p.rend());

    vector<long long> pref(n + 1, 0);
    for(int i = 0; i < n; i++){
        pref[i + 1] = pref[i] + p[i];
    }

    while(q--){
        int x, y;
        cin >> x >> y;
        cout << pref[x] - pref[x - y] << "\n";
    }

    return 0;
}
