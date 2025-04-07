#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> neg_arr;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            neg_arr.push_back(a[i]);
        }
    }

    sort(neg_arr.begin(), neg_arr.end());

    int sum = 0;
    for(int i = 0; i < min(m, (int)neg_arr.size()); i++){
        sum += -neg_arr[i];
    }

    cout << sum << endl;

    return 0;
}
