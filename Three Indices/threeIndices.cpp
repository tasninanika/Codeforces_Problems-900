#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int j = 1; j < n - 1; j++){
            if(a[j] > a[j - 1] && a[j] > a[j + 1]){
                cout << "YES\n";
                cout << j << " " << j + 1 << " " << j + 2 << "\n";
                break;
            }
        }

    }

    cout << "NO\n";

    return 0;
}
