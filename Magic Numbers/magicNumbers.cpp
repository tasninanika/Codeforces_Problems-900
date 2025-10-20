#include<bits/stdc++.h>

int main() {
    string s;
    cin >> s;

    bool is_magic = true;
    int i = 0;
    while(i < s.length()) {
        if (i + 2 < s.length() && s.substr(i, 3) == "144") {
            i += 3;
        }
        else if (i + 1 < s.length() && s.substr(i, 2) == "14") {
            i += 2;
        }

        else if (s[i] == '1') {
            i += 1;
        } else {
            is_magic = false;
            break;
        }
    }
    if (is_magic) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

