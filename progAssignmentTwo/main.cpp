#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int gcd(int x, int y);

int main ()
{
    int x, y;

    cout << "Enter an integer: ";
    cin >> x;
    cout << endl;
    cout << "Enter another integer: ";
    cin >> y;
    cout << endl;

    cout << "The GCD of " << x << " and " << y << " is: ";
    
    cout << gcd(x, y) << endl;

    return 0;
}

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    else {
        return gcd(y, x % y);
    }
}
