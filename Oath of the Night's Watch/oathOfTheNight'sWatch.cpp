#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return 0;
    }

    vector<int> a(n);
    int min_val = 2147483647;
    int max_val = -1;

    for(int i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] < min_val){
            min_val = a[i];
        }
        if(a[i] > max_val){
            max_val = a[i];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > min_val && a[i] < max_val){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
