#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, sum_of_coins, sum_of_my_coins = 0, c = 0;
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
        if(sum_of_coins > sum_of_my_coins){
            sum_of_my_coins += arr[i];
            c++;
        }
    }


    return 0;
}
