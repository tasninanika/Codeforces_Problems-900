#include<iostream>
using namespace std;

int main(){
    long long n, b, d;
    cin >> n >> b >> d;

    long long current_size = 0;
    int waste_count = 0;

    for(long long i = 0; i < n; i++){
        long long orange_size;
        cin >> orange_size;

        if(orange_size <= b){
            current_size += orange_size;

            if(current_size > d){
                waste_count++;
                current_size = 0;
            }
        }
    }

    cout << waste_count << "\n";

    return 0;
}
