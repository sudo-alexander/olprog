#include <iostream>

using namespace std;

int main(){
    string s0 = "", s = "";
    getline(cin, s0);
    for (int i = 0; i < s0.size(); i++){
        if (s0[i] == '0' || s0[i] == '1'){
            s += s0[i];
        }
    }
    //cout << s;
    int black = 0, white = 0;
    black += s[0] == '1';
    white += s[0] == '0';
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] != s[i + 1]){
            black += s[i + 1] == '1';
            white += s[i + 1] == '0';
        }
    }
    cout << black << " " << white;
    return 0;
}