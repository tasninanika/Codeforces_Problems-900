#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    long long a, b, c;
    cin >> a >> b >> c;

    long long s = a + b + c;
    bool pos = false;

    for(int m = 3; m <= 6; m++){
      if(s % m == 0){
        long long l = s / m;
        if(a % l == 0 && b % l == 0 && c % l == 0) {
          pos = true;
          break;
        }
      }
    }

    if(pos){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
  return 0;
}
