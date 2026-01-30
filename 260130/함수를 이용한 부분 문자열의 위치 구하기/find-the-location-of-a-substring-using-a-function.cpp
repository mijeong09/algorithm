#include <iostream>
#include <string>

using namespace std;

string str, target;
int len;

int FindStr(string str, string target) {
    if(str.find(target) != string::npos) return str.find(target);
    else return -1;
}


int main() {
    cin >> str >> target;
    
    len = target.length();

    cout << FindStr(str, target);

    return 0;
}