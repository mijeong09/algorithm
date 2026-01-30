#include <iostream>
#include <string>

using namespace std;

string A;

bool Diff(string &s) {
    if(s.size() > 1) {
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] != s[i + 1]) return true;
        }
    }

    return false;
}

int main() {
    cin >> A;

    if(Diff(A)) cout << "Yes";
    else cout << "No";

    return 0;
}