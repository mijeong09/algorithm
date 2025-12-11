#include <iostream>
using namespace std;

int main() {
    char c;

    cin >> c;

    if(c == 'S') cout << "Superior";
    else if(c == 'A') cout << "Excellent";
    else if(c == 'B') cout << "Good";
    else if(c == 'C') cout << "Usually";
    else if(c == 'D') cout << "Effor";
    else cout << "Failure";
    
    return 0;
}