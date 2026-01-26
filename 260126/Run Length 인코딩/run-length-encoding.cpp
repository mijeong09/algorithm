#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, str2 = "";

    cin >> str;

    char a = str[0];
    int n = 1;

    for(int i = 1; i < str.length(); i++) {
        if(str[i] == str[i - 1]) {
            n++;
        }
        else {
            str2 += a;
            str2 += to_string(n);

            a = str[i];
            n = 1;
        }
    }

    str2 += a;
    str2 += to_string(n);

    cout << str2.length() << endl << str2;

    return 0;
}
