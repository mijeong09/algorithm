#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, res_str = "";
    char c1, c2;

    cin >> str;

    c1 = str[0];
    c2 = str[1];

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c1) {
            res_str += c2;
        }
        else if(str[i] == c2) {
            res_str += c1;
        }
        else res_str += str[i];
    }

    cout << res_str;

    return 0;
}