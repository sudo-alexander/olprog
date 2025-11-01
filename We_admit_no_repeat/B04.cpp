#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "";
    cin >> s;
    int cnt_x = count(s.begin(), s.end(), 'x');
    int cnt_y = count(s.begin(), s.end(), 'y');
    if (cnt_x > cnt_y){
        string res(cnt_x - cnt_y, 'x');
        cout << res << endl;
    }
    else{
        string res(cnt_y - cnt_x, 'y');
        cout << res << endl;
    }
    return 0;
}