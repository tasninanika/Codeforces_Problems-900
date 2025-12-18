#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;

    vector<int> a(n + 2);
    for(int i = 1; i <= n; i++){
      cin >> a[i];
    }

    int M = 0;
    for (int i = 1; i <= n; i++) {
      M = max(M, a[i]);
    }

    int ans = -1;
    for(int i = 1; i <= n; i++){
      if(a[i] == M){
        bool can = false;

        if(i > 1 && a[i - 1] < M)
            can = true;

        if(i < n && a[i + 1] < M)
            can = true;

        if(can){
          ans = i;
          break;
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
