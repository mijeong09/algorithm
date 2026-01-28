#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    string str1 = "", str2 = "";
    for(int i = 0; i < a.length(); i++) {
        if(isdigit(a[i])) str1 += a[i];
    }

    for(int i = 0; i < b.length(); i++) {
        if(b[i] >= '0' && b[i] <= '9') str2 += b[i];
    }

    cout << stoi(str1) + stoi(str2);

    return 0;
}