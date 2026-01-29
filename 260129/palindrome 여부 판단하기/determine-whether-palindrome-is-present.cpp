#include <iostream>
#include <string>

using namespace std;

string A;

bool IsPalindrome(string &a) {
    string str = "";

    for(int i = 0; i < (int) a.size(); i++) {
        if(a[i] != a[(int) a.size() - 1 - i])
            return false;
    }
    return true;
}

int main() {
    cin >> A;

    if(IsPalindrome(A)) cout << "Yes";
    else cout << "No";

    return 0;
}