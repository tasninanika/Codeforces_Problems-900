#include<bits/stdc++.h>
using namespace std;

int main(){
    char shift_direction;
    string typed_message;
    cin >> shift_direction >> typed_message;

    const string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string original_message = "";

    int offset;
    if(shift_direction == 'R'){
        offset = -1;
    }
    else{
        offset = 1;
    }

    for(size_t i = 0; i < typed_message.length(); i++){
        char typed_char = typed_message[i];
        size_t index = keyboard.find(typed_char);
        size_t original_index = index + offset;
        original_message += keyboard[original_index];
    }
    cout << original_message << endl;



    return 0;
}
