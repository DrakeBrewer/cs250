// =============================
#include "includes.hpp"
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
    // Member-Fucntion Display()
    // =============================
    void Menu::Display() {

        cout << "1: Quit" << endl;
        cout << "2: Add       3: Subtract" << endl;
        cout << "4: Multiply  5: Divide " << endl;
        cout << "6: DoubleMultiply " << endl;

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

            case 2: userMenuSelection = Add;
                break;

            case 3: userMenuSelection = Subtract;
                break;

            case 4: userMenuSelection = Multiply;
                break;

            case 5: userMenuSelection = Divide;
                break;

            case 6: userMenuSelection = DoubleMultiply;
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
        int numA, numB;
        Number numberA, numberB, numberC(0);

        if ( userMenuSelection != Quit ) {

            // =====
            // Input
            // ====================
            
            cout << "Enter an integer value: ";
            cin >> numA;
            numberA.Set(numA);

            cout << "Enter another integer value: ";
            cin >> numB;
            numberB.Set(numB);
            cout << endl;
            
            // ====================

            // ====================
            switch (userMenuSelection) {
                case Add: numberC.Add(numberA, numberB);
                            cout << numberA.Get() << " + " << numberB.Get() << " = " << numberC.Get() << endl;
                    break;

                case Subtract: numberC.Subtract(numberA, numberB);
                            cout << numberA.Get() << " - " << numberB.Get() << " = " << numberC.Get() << endl;
                    break;

                case Multiply: numberC.Multiply(numberA, numberB);
                            cout << numberA.Get() << " * " << numberB.Get() << " = " << numberC.Get() << endl;
                    break;

                case Divide: numberC.Divide(numberA, numberB);
                            cout << numberA.Get() << "/" << numberB.Get() << " = " << numberC.Get() << endl;
                    break;

                case DoubleMultiply: numberC.DoubleMultiply(numberA, numberB);
                            cout << numberA.Get() << " * " << numberB.Get() << " + " << numberA.Get() << " * " << numberB.Get() << " = " << numberC.Get() << endl;
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
