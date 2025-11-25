#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> m(n);
        for(int i = 0; i < n; i++){
            cin >> m[i];
        }

        long long prev_time = 0;

        for(int i = 0; i < n; i++){
            long long diff = m[i] - prev_time;
        }
    }




    return 0;
}
