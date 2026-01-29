#include <iostream>
#include <string>

using namespace std;

string A;

string IsPalindrome(string &a) {
    string str = "";

    for(int i = a.length() - 1; i >= 0; i--) {
        str += a[i];
    }

    return str;
}

int main() {
    cin >> A;

    if(A == IsPalindrome(A)) cout << "Yes";
    else cout << "No";
    
    return 0;
}