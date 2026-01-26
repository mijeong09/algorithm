#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, tot_str = "";
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;
        tot_str.append(str);
    }
    
    for(int i = 0; i < tot_str.length(); i++) {

        cout << tot_str[i];

        if((i + 1) % 5 == 0) {
            cout << endl;
        }
    }

    return 0;
}