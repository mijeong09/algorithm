#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

bool InSubStr(int idx) {
    int n = text.size();
    int m = pattern.size();

    if(idx + m > n) return false;

    for(int i = 0; i < m; i++) {
        if(text[idx + i] != pattern[i])
            return false;
    }

    return true;
}

int FindIdx() {
    for(int i = 0; i < text.size(); i++) {
        if(InSubStr(i)) return i;
    }
    return -1;
}

int main() {
    cin >> text;
    cin >> pattern;

    cout << FindIdx();

    return 0;
}