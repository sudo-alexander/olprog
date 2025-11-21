#include <iostream>
#include <math.h>

using namespace std;

int main(){
    long long n = 0;
    cin >> n;
    for (int i = 2; i <= pow(n, 0.5); i++){
        if (n % i == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << (n != 1) << endl;
    return 0;
}