#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, H, M;
        cin >> n >> H >> M;

        int bedtime_minutes = H * 60 + M;
        int min_sleep = 1440;

        for(int i = 0; i < n; i++){
            int h, m;
            cin >> h >> m;

            int alarm_minutes = h * 60 + m;
            int diff = alarm_minutes - bedtime_minutes;

            if(diff < 0){

            }
        }
    }



    return 0;
}
