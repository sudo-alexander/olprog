#include <iostream>
#include <vector>

using namespace std;


int main(){
    string s = "";
    cin >> s;
    int n = s.size();
    int  ans = 0;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            for (int j = i; i < n; i++){
                //if (s[j] == s[j - i])
            }
        }
    }
    return 0;
}