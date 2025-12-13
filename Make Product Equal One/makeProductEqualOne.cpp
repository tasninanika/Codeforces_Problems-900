#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long total_cost = 0;
    int negative_count = 0;
    int zero_count = 0;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;

        if(x > 0){
            total_cost += (x - 1);
        }
        else if(x < 0){
            total_cost += (abs(x) - 1);
            negative_count++;
        }
        else{
            total_cost += 1;
            zero_count++;
        }
    }

    if(negative_count % 2 != 0){
        if(zero_count == 0){
            total_cost += 2;
        }
    }

    cout << total_cost << endl;

    return 0;
}
