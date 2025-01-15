#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0, sum_of_my_coins = 0, c = 0;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sum = sum / 2;

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        sum_of_my_coins += arr[i];
        c++;
        if (sum_of_my_coins > sum) {
            break;
        }
    }
    cout << c << endl;




    return 0;
}
