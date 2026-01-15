#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int idx = N;
    while(idx > 0) {
        int max = 0;

        for(int i = idx - 1; i >= 0; i--) {
            if(a[i] >= max) {
                max = a[i];
                idx = i;
            }
        }
        cout << idx + 1 << " ";
    }

    return 0;
}
