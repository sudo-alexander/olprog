#include <iostream>

using namespace std;

int main(){
    int n = 0, m = 0, min = 0, max = 0, x = 0, temp1 = 1, temp2 = 1;
    cin >> n >> m >> min >> max;
    for (int i = 0; i < m; i++){
        cin >> x;
        if (x < min || x > max){
            cout << "Incorrect" << endl;
            return 0;
        }
        if (x == max) temp1 *= 0;
        if (x == min) temp2 *= 0;
    }
    if (n - m < (temp1 == 1) + (temp2 == 1)){
        cout << "Incorrect" << endl;
    }
    else{
        cout << "Correct" << endl;
    }
    return 0;
}