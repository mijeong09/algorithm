#include <iostream>
#include <string>

using namespace std;

string str, target;

bool InSubStr(int idx) {
    int n = str.size();
    int m = target.size();

    if(idx + m > n) return false;

    for(int i = 0; i < m; i++) {
        if(str[idx + i] != target[i])
            return false;
    }

    return true;
}

int FindIdx() {
    int n = str.size();
    
    for(int i = 0; i < n; i++) {
        if(InSubStr(i)) return i;
    }
}


int main() {
    cin >> str >> target;
    
    cout << FindIdx();

    return 0;
}