#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long operations = 0;
        bool possible = true;

        for(int i = n - 2; i >= 0; i--){
            long long required_max = a[i + 1] - 1;

            if(required_max < 0){
                possible = false;
                break;
            }

            while(a[i] > required_max){
                a[i] /= 2;
                operations++;
            }
        }

        if(possible){
            cout << operations << endl;
        }
        else{

        }
    }




    return 0;
}
