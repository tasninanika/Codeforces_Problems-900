#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<long long> a(n + 1);
    long long sum = 0;

    for(int i = 1; i <= n; i++){
      cin >> a[i];
      sum += a[i];
    }

    long long ans = sum - 2LL * a[n - 1];

    cout << ans << '\n';
  }
  return 0;
}
