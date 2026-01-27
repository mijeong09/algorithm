#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str;

    while(str.length() > 1) {
        cin >> n;

        if(n > str.length() - 1) {
            n = str.length() - 1;
        }
        
        str.erase(n, 1);

        cout << str << endl;
    }

    return 0;
}