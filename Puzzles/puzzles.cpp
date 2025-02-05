#include<iostream>
using namespace std;

int main(){
    int n, m, a = 0, b;
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

    a = f[m-1] - f[0];

    for(int i = n; i <= m; i++){
        b = f[i-1] - f[i-n];
        b = abs(b);
        a = min(a,b);
    }



    return 0;
}
