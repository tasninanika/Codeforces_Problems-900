#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int c = 0;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] <= a[i+1]){
            c++;
        }
        else{
            c = 0;
        }
    }

    return 0;
}
