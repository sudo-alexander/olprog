#include <iostream>

using namespace std;

int main(){
    string s = "", s0;
    cin >> s;
    int k1 = 0, res = 0;
   for (int i = 0; i < s.size(); i++){
        if (s[i] == '(') k1++;
        else if (s[i] == ')' && k1 > 0){
            res += 2;
            k1--;
        }
   }
   cout << res;
   return 0; 
}