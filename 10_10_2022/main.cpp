#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int recursiveFunction(int);

int main () {
    int entry;
    cout << "enter an integer" << endl;
    cin >> entry;
    cout << recursiveFunction(entry) << endl;
}

int recursiveFunction (int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n = recursiveFunction(n-1);
    }
}

