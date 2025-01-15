#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, sum_of_coins;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
        sum_of_coins = sum;
    }
    for(int i = 0; i < n; i++){
        my_coin = sum_of_coins - arr[i]
    }


    return 0;
}
