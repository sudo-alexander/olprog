    #include <iostream>
    #include <math.h>
     
    using namespace std;
     
    bool is_prime(long long n){
        if (n == 1){
            return false;
        }
        if (n == 2){
            return true;
        }
        for (long long i = 2; i <= pow(n, 0.5); i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
     
    int main(){
        long long n = 0;
        cin >> n;
        for (long long i = n + 1; i <= pow(10, 13); i++){
            if (is_prime(i)){
                cout << i << endl;
                break;
            }
        }
        return 0;
    }