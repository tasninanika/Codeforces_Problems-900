#include<bits/stdc++.h>
using namespace std;

int main(){
    long t;
    cin >> t;

    while(t--){
        long n, k;
        cin >> n >> k;

        vector<pair<long, long>> a(n);
        for(long p = 0; p < n; p++){
            long x;
            cin >> x;

            a[p] = {x, p};
        }

        vector<long> b(n);
        for(long p = 0; p < n; p++){
            cin >> b[p];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<long> c(n);
        for(long p = 0; p < n; p++){
            c[a[p].second] = b[p];
        }

        for(long p = 0; p < n; p++){
            cout << c[p] << (p == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
