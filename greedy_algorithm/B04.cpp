#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n = 0;
    string s = "", s1 = "", s2 = "";
    cin >> n >> s;
    //vector<char> c1(n);
    //vector<char> c2(n);
    s1 = s.substr(0, s.size() / 2);
    s2 = s.substr(s.size() / 2);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1[0] < s2[0]){
        for (int i = 1; i < s1.size(); i++){
            if (s1[i] >= s2[i]){
                cout << "NO";
                return 0;
            }
        }
    }
    else if (s1[0] > s2[0]){
        for (int i = 1; i < s1.size(); i++){
            if (s1[i] <= s2[i]){
                cout << "NO";
                return 0;
            }
        }
    }
    else{
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}