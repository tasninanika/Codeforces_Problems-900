#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n, x;
    cin >> n >> x;

    vector<int> p(n);
    if(x == 0){
      for(int i = 0; i < n - 1; i++){
        p[i] = i + 1;
      }

      if(n > 0){
        p[n - 1] = 0;
      }

    }
    else if(x == n){
      for(int i = 0; i < n; i++){
        p[i] = i;
      }
    }
    else{
      for(int i = 0; i < x; i++){
        p[i] = i;
      }

      int idx = x;
      for (int i = x + 1; i < n; i++) {
        p[idx++] = i;
      }
      p[idx] = x;
    }

    for(int i = 0; i < n; i++){
      if(i > 0)
        cout << " ";

      cout << p[i];
    }
    cout << "\n";
  }
  return 0;
}
