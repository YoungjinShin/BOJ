#include <iostream>

using namespace std;

int d(int n) {
    int result = n;
    while (n != 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int main() {
    int check[10001] = {0,};
    int num;
    for (int i=1; i<=10000; i++) {
        num = d(i);
        if (num > 10000)
            continue;

        check[num] = 1;
    }

    for(int i=1; i<=10000; i++) {
        if(check[i] != 1) {
            cout << i << "\n";
        }
    }
    return 0;
}