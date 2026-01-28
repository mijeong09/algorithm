#include <iostream>

using namespace std;

bool Check(int n1, int n2) {
    int a[100], b[100];

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int i = 0; i < n2; i++) cin >> b[i];

    bool exists;
    for(int i = 0; i <= n1 - n2; i++) {
        exists = true;

        for(int j = 0; j < n2; j++) {
            if(a[i + j] != b[j]) exists = false;
        }

        if(exists) return exists;
    }

    return exists;
}

int n1, n2;

int main() {
    cin >> n1 >> n2;

    if(Check(n1, n2)) cout << "Yes";
    else cout << "No";

    return 0;
}