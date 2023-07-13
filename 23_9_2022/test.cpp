// =====================
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
// =====================

// Function Proto's
// =====================
void welcomeMessage();
void getInteger(int&);
int sum(int, int);
// =====================

// =====================
// function main()
// 
    // NOTES
    // 1) void functions, a review.
// =====================


int main() {
    int numA, numB;

    welcomeMessage();
    getInteger(numA);
    getInteger(numB);

    cout << numA << " + " << numB << " = " << sum(numA, numB) << endl;


    return 0;
};

// =====================
void welcomeMessage() {
    
    cout << "========================================";
    cout << endl;
    cout << "AAB-Project-Week1-Wednesday.cpp project.";
    cout << "\n";
    cout << "========================================";
    cout << endl << endl;
}
// =====================

// =====================
void getInteger(int& num) {
    cout << "Enter an integer value ==> ";
    cin >> num;
}
// =====================

// =====================
int sum(int valA, int valB) {
    return valA + valB;
}
// =====================