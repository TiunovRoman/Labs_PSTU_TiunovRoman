#include <iostream>
using namespace std;

int main() {
    int n, s = 0, c = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 2 * i; ++j) 
        c *= j;
        s += c;
        c = 1;
    }
    cout << s;
    return 0;
}