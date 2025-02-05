#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int f[m];
    for(int i = 0; i < m; i++){
        cin >> f[i];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m - i - 1; j++){
            if(f[j] > f[j+1]){
                swap(f[j],f[j+1]);
            }
        }
    }

    for(int i = 0; i < m; i++){
        if(f[i])
    }

    return 0;
}
