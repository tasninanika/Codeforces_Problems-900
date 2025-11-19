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

        k_moves.insert({xk + a, yk + b});
        k_moves.insert({xk + a, yk - b});
        k_moves.insert({xk - a, yk + b});
        k_moves.insert({xk - a, yk - b});

        k_moves.insert({xk + b, yk + a});
        k_moves.insert({xk + b, yk - a});
        k_moves.insert({xk - b, yk + a});
        k_moves.insert({xk - b, yk - a});


        set<pair<long long, long long>> q_moves;

        q_moves.insert({xq + a, yq + b});
        q_moves.insert({xq + a, yq - b});
        q_moves.insert({xq - a, yq + b});
        q_moves.insert({xq - a, yq - b});

        q_moves.insert({xq + b, yq + a});
        q_moves.insert({xq + b, yq - a});
        q_moves.insert({xq - b, yq + a});
        q_moves.insert({xq - b, yq - a});


        long long common_count = 0;

        for (const auto& q_pos : q_moves) {
            if (k_moves.count(q_pos)) {
                common_count++;
            }
        }

        cout << common_count << "\n";
    }

    return 0;
}
