#include <iostream>

using namespace std;

int main(){
    string s  = "", res = "";
    int temp1 = 1;
    getline(cin, s);
    s += "-";
    for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == s[i + 1]){
            temp1++;
        }
        else{
            if (temp1 != 1){
                cout << s[i] << to_string(temp1);
            }
            else{
                cout << s[i];
            }
            temp1 = 1;
        }
    }
    return 0;
}