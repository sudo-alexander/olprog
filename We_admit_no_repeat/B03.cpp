#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "";
    cin >> s;
    int cnt_a = count(s.begin(), s.end(), 'a');
    int cnt_b = count(s.begin(), s.end(), 'b');
    int cnt_c = count(s.begin(), s.end(), 'c');
    if (!(prev_permutation(s.begin(), s.end())) && (cnt_c == cnt_a || cnt_b == cnt_c) && cnt_a > 0 && cnt_b > 0 && cnt_c > 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}