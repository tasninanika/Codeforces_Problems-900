#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        string result = "";
        int i = n - 1;

        while(i >= 0){
            if(i - 2 >= 0 && !is_vowel(s[i - 2]) && is_vowel(s[i - 1])){
                result += s[i];
                result += s[i - 1];
                result += s[i - 2];
                i -= 3;
            }
            else if(i - 1 >= 0 && !is_vowel(s[i - 1])){
                if(is_vowel(s[i - 1])){
                    if (i - 2 < 0 || is_vowel(s[i - 2])) {
                        result += s[i];
                        result += s[i - 1];
                        i -= 2;
                    }
                    else{
                        result += s[i];
                        result += s[i - 1];
                        result += s[i - 2];
                        i -= 3;
                    }
                }
            }
            else{
                if (i - 1 >= 0){
                 result += s[i];
                 result += s[i - 1];
                 i -= 2;
                }
                else {
                 result += s[i];
                 i -= 1;
                }
            }
        }
        if(i >= 0){
            result += '.';
        }
    }




    return 0;
}
