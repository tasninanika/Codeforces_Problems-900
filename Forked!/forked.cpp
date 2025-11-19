#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long a, b;
        cin >> a >> b;
        long long xk, yk;
        cin >> xk >> yk;
        long long xq, yq;
        cin >> xq >> yq;

        set<pair<long long, long long>> k_moves;

        vector<pair<long long, long long>> d = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        }

        for (const auto& move : d) {
            k_moves.insert({xk + move.first, yk + move.second});
        }

        long long common_count = 0;

        for (const auto& move : d) {
            long long qx = xq + move.first;
            long long qy = yq + move.second;

            if (k_moves.count({qx, qy})) {
                common_count++;
            }
        }
    }




    return 0;
}
