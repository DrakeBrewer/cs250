// =============================
#include "includes.hpp"
// =============================

    // Funciton Declarations
    // =============================
    void sumProductDifference(int, int, int&, int&, int&);
    int power(int, int);
    // =============================


    // =============================
    // Default Constructor
    // =============================
    Menu::Menu( void ) {

        userMenuSelection = Quit;

    } // Constructor Menu
    // =============================

// ================
// End Constructors
// ================

// ==========
// Destructor

// NOTES:
// 1) The Menu constructor does not dynamically allocate space in the freestore.
//     Thus, the destructor does not need to deallocate memory.
// ============================================================
    Menu::~Menu( void ) {
        cout << "Destructor ~Menu invoked." << endl;
    } // Destructor ~Menu
// =============================

// ==============
// End Destructor
// ==============


// ================
// Member-Functions
// ================

    // =============================
    // Accessor Member-Function Get()
    // =============================
    MenuChoices Menu::Get() {

        return userMenuSelection;

    } // Accessor Method Get()
    // =============================


    // =============================
    // Mutator Membor-Function Set()
    // =============================
    void Menu::Set(MenuChoices newValue) {

        userMenuSelection = newValue;
    } // Member-Function Display
    // =============================

    // =============================
    // Member-Fucntion QueryUser()
    // =============================
    void Menu::Display() {

        cout << "1: Quit" << endl;
        cout << "2: SumProductDifference " << endl;
        cout << "3: Power " << endl;

    } // Member-Function Display
    // =============================

    // =============================
    // Member-Fucntion QueryUser()
    // =============================
    void Menu::QueryUser() {

        int selection;

        cout << "Enter Menu Selection: ";
        // ======================================================
        // Obtain from the user a menu selection number, and 
        // use that value to assign the corresponfing enumerated 
        // value to the private member-variable userMenuSelection.
        // ======================================================
        cin >> selection;

        switch (selection) {
            case 1: userMenuSelection = Quit;
                break;

            case 2: userMenuSelection = SumProductDifference;
                break;

            case 3: userMenuSelection = Power;
                break;

            default: userMenuSelection = Quit;
        } // switch

        cout << endl;

    } // QueryUser() Function
    // ===========================

    // ===========================
    // Method Continue
    // ===========================
    bool Menu::Continue() {

            return userMenuSelection != Quit;

    } // Method Continue
    // ===========================

    // ===========================
    // Member-Function ProcessCommand()
    // ===========================
    void Menu::ProcessCommand() {
        int numberA, numberB, sum, product, difference;

        if ( userMenuSelection != Quit ) {

            // =====
            // Input
            // ====================
            if (userMenuSelection == SumProductDifference) {
                cout << "Enter an integer value: ";
                cin >> numberA;

                cout << "Enter another integer value: ";
                cin >> numberB;
                cout << endl;
            } else {
                cout << "Enter an integer value: ";
                cin >> numberA;

                cout << "Enter an integer value for the exponent: ";
                cin >> numberB;
                cout << endl;
            }
            // ====================

            // ====================
            switch (userMenuSelection) {
                case SumProductDifference: sumProductDifference(numberA, numberB, sum, product, difference);
                                            cout << "Sum: " << numberA << " + " << numberB << " = " << sum << endl;
                                            cout << "Product: " << numberA << " * " << numberB << " = " << product << endl;
                                            cout << "Difference: " << numberA << " - " << numberB << " = " << difference << endl;
                    break;

                case Power: cout << numberA << "^" << numberB << " = " << power(numberA, numberB) << endl;
                    break;

                default: cout << "Warning: error state encountered." << endl;
            } // switch
            // ===================

            cout << endl;

        } // then

    } // Method ProcessCommand()
    // ==========================

// ===========================
// End Member-Functions
// ===========================


// ===========================
// Function Definitions
// ===========================

    // ===============================
    // sumProductDifference() Function
    // ===============================
    void sumProductDifference(int a, int b, int& sum, int& prod, int& diff) 
    {
        sum = a + b;
        prod = a * b;
        diff = a - b;
    } // sumProductDifference() Function
    // ===============================
    
    // ===============================
    // power() Function
    // ===============================
    int power(int a, int b) 
    {
        int c;

        c = a;
        if ( b == 0) {

            a = 1;

        } else if (b > 1) {

        for (int i = 1; i < b; i++) {
                a = c * a;  
        } 

        }

        return a;

    } // power() Function
    // ===========================

// =========================
// End Function Definitions
// =========================

