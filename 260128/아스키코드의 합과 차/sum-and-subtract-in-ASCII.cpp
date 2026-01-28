#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    int num;

    if(a > b) num = (int)a - b;
    else num = (int)b - a;

    cout << (int)a + b << " " << num;

    return 0;
}