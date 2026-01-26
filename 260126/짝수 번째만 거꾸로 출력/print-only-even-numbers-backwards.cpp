#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cin >> str;

    int len = str.length();
    int n = (len % 2 == 0) ? len - 1 : len - 2;
    
    for(int i = n; i >= 0; i -= 2) {
        cout << str[i];
    }

    return 0;
}