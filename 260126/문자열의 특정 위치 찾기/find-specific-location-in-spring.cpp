#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char a;

    cin >> str >> a;

    if(str.find(a) != string::npos) cout << str.find(a);
    else cout << "No";

    return 0;
}