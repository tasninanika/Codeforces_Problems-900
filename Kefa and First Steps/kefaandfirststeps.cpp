#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int c = 0, m = 1;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] >= a[i-1]){
            c++;
            if(m < c){
                m = c;
            }
        }
        else{
            c = 1;
        }
    }

    cout << m << endl;

    return 0;
}
