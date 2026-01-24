#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    bool isbool = false;
    char a;

    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }

    cin >> a;

    for(int i = 0; i < 10; i++) {
        if(str[i][str[i].length() - 1] == a) {
            cout << str[i] << endl;
            isbool = true;
        }
    }

    if(isbool == false) cout << "None";

    return 0;
}