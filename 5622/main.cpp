#include <iostream>

using namespace std;

int getTime(char s) {
    string dial = "ABC/DEF/GHI/JKL/MNO/PQRS/TUV/WXYZ";
    int result = 3;
    for (int i=0; i<dial.length(); i++) {
        if (dial[i] == '/') {
            result++;
            continue;
        }
        if (s == dial[i])
            return result;
    }
}

int totalTime(string s) {
    int result = 0;
    for (int i=0; i<s.length(); i++)
        result += getTime(s[i]);
    return result;
}

int main() {
    string code;
    cin >> code;
    cout << totalTime(code);
    return 0;
}