#include <bits/stdc++.h>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    int lenA = A.length();
    int lenB = B.length();

    while(true) {
        int idx = -1;

        for(int i = 0; i <= lenA - lenB; i++) {
            bool exists = true;

            for(int j = 0; j < lenB; j++) {
                if(A[i + j] != B[j]) {
                    exists = false;
                    break;
                }
            }

            if(exists) {
                idx = i;
                break;
            }
        }

        if(idx == -1) break;

        A = A.substr(0, idx) + A.substr(idx + lenB);
        lenA -= lenB;
    }
    cout << A;

    return 0;
}
