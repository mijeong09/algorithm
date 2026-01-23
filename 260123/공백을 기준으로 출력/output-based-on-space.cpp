#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str2;

    getline(cin, str);
    getline(cin, str2);

    for(int i = 0; i < str.length(); i++) {
        if(str[i] != ' ') cout << str[i];
    }

    for(int i = 0; i < str2.length(); i++) {
        if(str2[i] != ' ') cout << str2[i];
    }

    return 0;
}