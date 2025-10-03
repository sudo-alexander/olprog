#include <iostream>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int temp = 0, res = 0, x = 0;
    for (int i = 0; i < N; i++){
        cin >> x;
        if (x == 1){
            temp++;
            res = max(res, temp);
        }
        else{
            temp = 0;
        }
    }
    cout << res << endl;
    return 0;
}