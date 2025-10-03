#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        int s_len = 0;
        string s1 = "", s2 = "";
        cin >> s_len >> s1;
        s2 = s1;
        sort(s2.begin(), s2.end());
        int cnt = 0, res = 0;
        for (int i = 0; i < s_len; i++){
            if (s1[i] == s2[i]){
                cnt += 1;
            }
        }
        cout << s_len - cnt << endl;
    }
    return 0;
}