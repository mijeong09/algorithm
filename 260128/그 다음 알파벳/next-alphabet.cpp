#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;

    cin >> a;

    int num_a = (int)a;

    if(a == 'z') cout << 'a';
    else cout << (char)(a + 1);
    
    return 0;
}