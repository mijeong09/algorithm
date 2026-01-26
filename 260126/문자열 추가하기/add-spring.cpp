#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cin >> str;
    
    str.append("Hello");

    cout << str;
    
    return 0;
}