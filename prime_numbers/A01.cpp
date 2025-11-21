#include <iostream>
#include <math.h>
     
using namespace std;
     
int main(){
    int n = 0, tmp = 1;
    cin >> n;
    for (int i = 2; i < pow(n, 0.5) + 1; i++){
        tmp *= (n % i != 0 || n == 2);
    }
    cout << tmp * (n != 1) << endl;
    return 0;
}