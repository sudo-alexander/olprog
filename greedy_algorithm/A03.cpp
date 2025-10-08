#include <iostream>

using namespace std;

/*
int f(int n){
    int su = 0;
    while (n > 0){
        su += n % 10;
        n /= 10;
    }
    return su;
}
*/

int main(){
    int su_c = 0;
    cin >> su_c;
    string res = "";
    while (su_c >= 9){
        su_c -= 9;
        res = "9" + res;
    }
    if (su_c % 9 != 0){
        res = to_string(su_c % 9) + res;
    }
    cout << res << endl;
    return 0;
}