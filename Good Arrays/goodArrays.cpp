#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long S = 0;
    int cnt1 = 0;

    for(int i = 0; i < n; i++){
      cin >> a[i];
      S += a[i];
      if(a[i] == 1)
        cnt1++;
    }
    if(n == 1){
      cout << "NO\n";
    }
    else{
      if(S >= (long long)n + cnt1){
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }
    }
  }
  return 0;
}
