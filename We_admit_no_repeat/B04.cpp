#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s = "";
    cin >> s;
    int cnt = count(s.begin(), s.end(), 'xy');
    cout << s.size() - 2 * cnt << endl;
    return 0;
}
