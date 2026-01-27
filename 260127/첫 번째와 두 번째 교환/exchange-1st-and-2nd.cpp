#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    char c1, c2;

    cin >> str;

    c1 = str[0];
    c2 = str[1];

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == c1) {
            str[i] = c2;
        }
        else if(str[i] == c2) {
            str[i] = c1;
        }
    }

    cout << str;

    return 0;
}