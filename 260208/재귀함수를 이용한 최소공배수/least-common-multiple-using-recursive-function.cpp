#include <iostream>

using namespace std;

int n;
int arr[10];

int Func() {
    for(int i = 2; ; i++) {
        bool isBool = true;

        for(int j = 0; j < n; j++) {
            if(i % arr[j] != 0) {
                isBool = false;
                break;
            }
        }
        if(isBool) return i;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << Func();

    return 0;
}