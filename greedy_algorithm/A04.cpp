#include <iostream>

using namespace std;

int main(){
    string s = "";
    cin >> s;
    int temp = 0, res = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '='){
            temp++;
        }
        else{
            temp = 0;
        }
        if (temp == 6){
            res++;
            temp = 0;
        } 
    }
    cout << res << endl;
    return 0;
}