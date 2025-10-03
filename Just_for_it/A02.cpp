#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int x = 0, maxim = 0, minim = pow(10, 10);
    for (int i = 0; i < N; i++){
        cin >> x;
        maxim = max(x, maxim);
        minim = min(x, minim);
    }
    cout << minim << " " << maxim;
    return 0;
}