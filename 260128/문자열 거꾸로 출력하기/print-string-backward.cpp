#include <iostream>
#include <string>
using namespace std;

int main() {

    for(int i = 0; i < 10; i++) {
        string str;

        cin >> str;

        if(str == "END") break;

        for(int j = str.length() - 1; j >= 0; j--) {
            cout << str[j];
        }
        cout << endl;
    }

    return 0;
}