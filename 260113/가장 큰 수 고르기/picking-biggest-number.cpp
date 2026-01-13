#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    cin >> arr[0];
    int max = arr[0];

    for(int i = 1; i < 10; i++) {
        cin >> arr[i];

        if(arr[i] > max) max = arr[i];
    }

    cout << max;
    
    return 0;
}