#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

//#define task_B02
#define bin_1


using namespace std;

#ifdef task_B02

int main(){
    string s = "";
    cin >> s;
    int k = 0, ans = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(') k++;
        else if (k = 0) ans++;
        else k--;
    }
    if (k > 0) ans += k;
    cout << ans;
    return 0;
}

#endif

#ifdef bin_1

//Функция проверки наличия х в посл
bool findx(vector<int> v, int x){
    int n = v.size();
    int l = 0, r = n - 1;
    while (l <= r){
        int c =  (l + r) / 2;
        return v[c] == x;
        if (v[c] < x){
            l = c + 1;
        }
        else {
            r = c - 1;
        }
    }
    return false;
}

//Функция ля нахождения минимального х, который можно вставить в отсортирвоанную посл не нарушив ее
bool findx(vector<int> v, int x){
    int n = v.size();
    int l = 0, r = n - 1, ans = n;
    while (l <= r){
        int c =  (l + r) / 2;
        if (v[c] >= x){
            l = c + 1;
            ans = c;
        }
        else {
            l = c + 1;
        }
    }
    return ans;
}
int su_c(int n){
    int su = 0;
    while (n > 0){
        su += n % 10;
        n /= 10;
    }
    return su;
}

int f(int x, int k){
    return x * x + x * k;
}

bool check(int x, int k, int n){
    return f(x, k) <= n;
}

/*
bool check(vector<int> v, int k){
    bool ans = (p >= k) && (m >= k) && ()
}
    */

/*
int main(){
    int n = 0;
    cin >> n;
    for (int k = 1; k <= 8; k++){
        int l = 1, r = sqrt(n), ans = 0;
        while (l <= r){
            int c = (l + r) / 2;
            if (check(c, k, n)){
                ans = c;
                l = c + 1;
            }
            else r = c - 1
        }
        if (f(ans, k) == n){
            if (su_c == k){
                cout << ans;
                return 0;
            }
        }
    }
}
*/

#endif