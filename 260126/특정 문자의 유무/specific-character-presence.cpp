#include <iostream>
#include <iostream>
using namespace std;

int main() {
    string str;

    cin >> str;

    if(str.find("ee") != string::npos) {
        cout << "Yes" << " ";
    }
    else cout << "No" << " ";

    string exists = "No";
    for(int i = 0; i < str.length() - 1; i++) {
        if(str.substr(i, 2) == "ab") exists = "Yes";
    }

    cout << exists;

    return 0;
}