#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        string numberString;
        cin >> numberString;

        int maxSequence = 0;
        int zeroCount = 0;

        for (int i = 0; i < (int)numberString.size(); i++) {
            if (numberString[i] == '0') {
                zeroCount++;
            } else {
                if (zeroCount + 1 > maxSequence) {
                    maxSequence = zeroCount + 1;
                }
            }
        }

        cout << (int)numberString.size() - maxSequence << endl;
    }

    return 0;
}

