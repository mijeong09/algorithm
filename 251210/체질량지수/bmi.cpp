#include <iostream>
using namespace std;

int main() {
    int h, w;

    cin >> h >> w;

    double bmi = (w * 10000) / (h * h);

    cout << (int)bmi << "\n";

    if (bmi >= 25) cout << "Obesity";

    return 0;
}