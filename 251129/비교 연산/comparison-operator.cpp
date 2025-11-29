#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    bool boolean = true;

    if(a >= b) {
        cout << true << '\n';
    } else cout << false << '\n';
    if(a > b) {
        cout << true << '\n';
    } else cout << false << '\n';
    if(a <= b) {
        cout << true << '\n';
    } else cout << false << '\n';
     if(a < b) {
        cout << true << '\n';
    } else cout << false << '\n';
    if(a == b) {
        cout << true << '\n';
    } else cout << false << '\n';
    if(a != b) {
        cout << true << '\n';
    } else cout << false << '\n';
        
    return 0;
}