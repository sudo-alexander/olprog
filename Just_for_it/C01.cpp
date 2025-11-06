#include <iostream>
using namespace std;

int main(){
    int k_S = 0, k_M = 0, k_L = 0, k_XL = 0, k_XXL = 0;
    cin >> k_S >> k_M >> k_L >> k_XL >> k_XXL;
    int k = 0;
    cin >> k;
    string s = "", res = "";
    for (int i = 0; i < k; i++){
        cin >> s;
        res = "";
        if (s == "S"){
            if (k_S > 0) {k_S--; res = "S";}
            else if (k_M > 0) {k_M--; res = "M";}
            else if (k_L > 0) {k_L--; res = "L";}
            else if (k_XL > 0) {k_XL--; res = "XL";}
            else if (k_XXL > 0) {k_XXL--; res = "XXL";}
        }
        else if (s == "M"){
            if (k_M > 0) {k_M--; res = "M";}
            else if (k_L > 0) {k_L--; res = "L";}
            else if (k_S > 0) {k_S--; res = "S";}
            else if (k_XL > 0) {k_XL--; res = "XL";}
            else if (k_XXL > 0) {k_XXL--; res = "XXL";}
        }
        else if (s == "L"){
            if (k_L > 0) {k_L--; res = "L";}
            else if (k_XL > 0) {k_XL--; res = "XL";}
            else if (k_M > 0) {k_M--; res = "M";}
            else if (k_XXL > 0) {k_XXL--; res = "XXL";}
            else if (k_S > 0) {k_S--; res = "S";}
        }
        else if (s == "XL"){
            if (k_XL > 0) {k_XL--; res = "XL";}
            else if (k_XXL > 0) {k_XXL--; res = "XXL";}
            else if (k_L > 0) {k_L--; res = "L";}
            else if (k_M > 0) {k_M--; res = "M";}
            else if (k_S > 0) {k_S--; res = "S";}
        }
        else if (s == "XXL"){
            if (k_XXL > 0) {k_XXL--; res = "XXL";}
            else if (k_XL > 0) {k_XL--; res = "XL";}
            else if (k_L > 0) {k_L--; res = "L";}
            else if (k_M > 0) {k_M--; res = "M";}
            else if (k_S > 0) {k_S--; res = "S";}
        }
        cout << res << endl;
    }
    return 0;
}