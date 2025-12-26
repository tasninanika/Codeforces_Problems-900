#include <bits/stdc++.h>
using namespace std;

int main(){
  const int MAXN = 1000000;

  vector<int> spd(MAXN + 1, 0);
  for (int i = 2; i <= MAXN; i++) spd[i] = i;
  for (int i = 2; i * i <= MAXN; i++) {
    if (spd[i] == i) {
      for (int j = i * i; j <= MAXN; j += i) {
        if (spd[j] == j) spd[j] = i;
      }
    }
  }
  int t;
  cin >> t;

  while(t--){
    int n;
    long long k;
    cin >> n >> k;
    if (n % 2 == 0) {
      cout << n + 2LL * k << '\n';
    }
    else {
      cout << n + (long long)spd[n] + 2LL * (k - 1) << '\n';
    }
  }
  return 0;
}
