#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;

    int ans;
    if (n >= k) {
      if ((n - k) % 2 == 0) {
        ans = 0;
      }
      else {
        ans = 1;
      }
    }
    else {
      ans = k - n;
    }
    cout << ans << endl;
  }
  return 0;
}
