#include <iostream>

using namespace std;

int main(){
    long long n = 0, temp = 0, x = 0;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &x);
        printf("%lld ", x - temp);
        temp = x;
    }
    return 0;
}