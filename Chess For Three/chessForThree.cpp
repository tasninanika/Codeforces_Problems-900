#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  while(t--){
    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;
    if(sum % 2 != 0){
      cout << -1 << '\n';
      continue;
    }

    int ans = -1;

    for(int pab = 0; pab <= a; pab++){
      int pac = a - pab;
      int par_ab = pab % 2;

      for(int pba = par_ab; pba <= b; pba += 2){
        int pbc = b - pba;
        int par_ac = pac % 2;

        for(int pca = par_ac; pca <= c; pca += 2){
          int pcb = c - pca;

          if((pbc + pcb) % 2 == 0){
            int dab = min(pab, pba);
            int dac = min(pac, pca);
            int dbc = min(pbc, pcb);
            int tot = dab + dac + dbc;
            if (tot > ans) ans = tot;
          }
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
