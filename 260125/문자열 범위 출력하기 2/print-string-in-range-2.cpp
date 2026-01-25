#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;

    cin >> str >> n;

    int cnt = 0;
    for(int i = str.length() - 1; i >= 0; i--) {
        cnt++;
        cout << str[i];

        if(cnt == n) break;
    }
    
    return 0;
}