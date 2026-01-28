#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(isalpha(str[i])) {
            if(islower(str[i])) {
                cout << (char) toupper(str[i]);
            }
            else cout << str[i];
        }
    }
    
    return 0;
}