#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    int par = a[0] % 2;
    bool ok = true;
    for(int i = 1; i < n; i++){
      if(a[i] % 2 != par){
        ok = false;
        break;
      }
    }
    if(ok){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
  return 0;
}
