#include <iostream>
using namespace std;

int main(){
    int k_S = 0, k_M = 0, k_L = 0, k_XL = 0, k_XXL = 0;
    cin >> k_S >> k_M >> k_L >> k_XL >> k_XXL;
    int k = 0;
    cin >> k;
    string s = "";
    for (int i = 0; i < k; i++){
        cin >> s;
        if (s == "S"){
            if (k_S > 0) {k_S--; cout << "S";}
            else if (k_M > 0) {k_M--; cout << "M";}
            else if (k_L > 0) {k_L--; cout << "L";}
            else if (k_XL > 0) {k_XL--; cout << "XL";}
            else if (k_XXL > 0) {k_XXL--; cout << "XXL";}
        }
        else if (s == "M"){
            if (k_M > 0) {k_M--; cout << "M";}
            else if (k_L > 0) {k_L--; cout << "L";}
            else if (k_S > 0) {k_S--; cout << "S";}
            else if (k_XL > 0) {k_XL--; cout << "XL";}
            else if (k_XXL > 0) {k_XXL--; cout << "XXL";}
        }
        else if (s == "L"){
            if (k_L > 0) {k_L--; cout << "L";}
            else if (k_XL > 0) {k_XL--; cout << "XL";}
            else if (k_M > 0) {k_M--; cout << "M";}
            else if (k_XXL > 0) {k_XXL--; cout << "XXL";}
            else if (k_S > 0) {k_S--; cout << "S";}
        }
        else if (s == "XL"){
            if (k_XL > 0) {k_XL--; cout << "XL";}
            else if (k_XXL > 0) {k_XXL--; cout << "XXL";}
            else if (k_L > 0) {k_L--; cout << "L";}
            else if (k_M > 0) {k_M--; cout << "M";}
            else if (k_S > 0) {k_S--; cout << "S";}
        }
        else if (s == "XXL"){
            if (k_XXL > 0) {k_XXL--; cout << "XXL";}
            else if (k_XL > 0) {k_XL--; cout << "XL";}
            else if (k_L > 0) {k_L--; cout << "L";}
            else if (k_M > 0) {k_M--; cout << "M";}
            else if (k_S > 0) {k_S--; cout << "S";}
        }
        cout << endl;
    }
    return 0;
}