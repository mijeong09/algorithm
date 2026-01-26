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

    cout << tot_str;
    
    return 0;
}