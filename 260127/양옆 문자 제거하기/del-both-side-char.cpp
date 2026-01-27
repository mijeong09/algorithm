#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;

    cin >> str;

    str = str.substr(0, str.length() - 2) + str[str.length() - 1];
    str = str[0] + str.substr(2);

    cout << str;

    return 0;
}