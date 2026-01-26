#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char a;
    int idx = -1;

    cin >> str >> a;

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == a) {
            idx = i;
            break;
        }
    }

    if(idx != -1) cout << idx;
    else cout << "No";

    return 0;
}