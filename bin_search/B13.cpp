#include <iostream>

using namespace std;

int main(){
    int m = 0, n = 0;
    cin >> m;
    int cnt_0 = 0, tmp = 5, power = 1;
    for (int i = 5; i <= m * 5; i += 5){
        /*
        if (i == tmp * 5){
            power++;
            cnt_0 += power;
            tmp *= 5;
        }
        else cnt_0++;
        */
       cnt_0++;
        for (int j = 25; j <= i; j *= 5){
            if (i % j == 0){
                cnt_0++;
            }
        }
        if (cnt_0 == m){
            cout << 5 << endl;
            cout << i << " " << i + 1 << " " << i + 2 << " " << i + 3 << " " << i + 4;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}