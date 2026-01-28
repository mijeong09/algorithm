#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        sum += num;
    }

    string str = to_string(sum);
    str = str.substr(1, str.length() - 1) + str.substr(0, 1);

    cout << str;
    
    return 0;
}