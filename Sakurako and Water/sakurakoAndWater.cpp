#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> a[i][j];
      }
    }

    int offset = n - 1;
    vector<int> min_d(2 * n - 1, INT_MAX);

    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        int d = i - j;
        int idx = d + offset;
        min_d[idx] = min(min_d[idx], a[i][j]);
      }
    }

    long long ans = 0;
    for(int m : min_d){
      if (m < 0) {
        ans += - (long long) m;
      }
    }

    cout << ans << '\n';
  }
  return 0;
}
