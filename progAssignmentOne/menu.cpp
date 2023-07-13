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
    // Member-Fucntion QueryUser()
    // =============================
    void Menu::Display() {

        cout << "=================================== " << endl;
        cout << " 1: Quit              2: PurgeStack " << endl;
        cout << " 3: InitializeStack   4: Pop        " << endl;
        cout << " 5: Push              6: PrintStack " << endl;
        cout << " 7: ReverseStack      8: Roll       " << endl;
        cout << " 9: Min              10: Max        " << endl;
        cout << "11: Sum              12: DoublePush " << endl;
        cout << "13: DoublePop                       " << endl;
        cout << "=================================== " << endl;

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

            case 2: userMenuSelection = PurgeStack;
                break;

            case 3: userMenuSelection = InitializeStack;
                break;

            case 4: userMenuSelection = Pop;
                break;

            case 5: userMenuSelection = Push;
                break;

            case 6: userMenuSelection = PrintStack;
                break;

            case 7: userMenuSelection = ReverseStack;
                break;

            case 8: userMenuSelection = Roll;
                break;

            case 9: userMenuSelection = Min;
                break;

            case 10: userMenuSelection = Max;
                break;

            case 11: userMenuSelection = Sum;
                break;

            case 12: userMenuSelection = DoublePush;
                break;

            case 13: userMenuSelection = DoublePop;
                break;

            default: userMenuSelection = PrintStack;
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
    void Menu::ProcessCommand( UserStack& userStack) {

        // ===============================
        // Variable and Object Declarations
        // ===============================
        int poppedValue, integerValue, maxValue, minValue, stackSum;
        int integerA, integerB, poppedValueA, poppedValueB;
        // ===============================
        

        if ( userMenuSelection != Quit ) {

            switch (userMenuSelection) {

                case DoublePush: 
                        if ( userStack.Full() ) {
                            cout << "The stack is full and a value cannot be pushed." << endl;
                            cout << endl;
                        } else {
                            cout << "Enter a value to push onto the stack: ";
                            cin >> integerA;
                            cout << "Enter another value to push onto the stack: ";
                            cin >> integerB;
                            userStack.DoublePush( integerA, integerB );
                        }
                    break;

                case InitializeStack: userStack.Initialize();
                    break;

                case DoublePop: 
                        if ( userStack.Empty() ) {
                            cout << "The stack is empty and cannot be popped." << endl;
                            cout << endl;
                        }

                        userStack.DoublePop(poppedValueA, poppedValueB);
                        cout << "Popped value 1 = " << poppedValueA << endl;
                        cout << "Popped value 2 = " << poppedValueB << endl;
                        cout << endl;
                    break;

                case Pop: 
                        if ( userStack.Empty() ) {
                            cout << "The stack is empty and cannot be popped." << endl;
                            cout << endl;
                        } else {

                            userStack.Pop(poppedValue);
                            cout << "Popped value = " << poppedValue << endl;
                            cout << endl;
                            
                        }
                    break;

                case PrintStack: userStack.Print();
                    break;

                case PurgeStack: userStack.Purge();
                    break;

                case Push: 
                        if ( userStack.Full() ) {
                            cout << "The stack is full and a value cannot be pushed." << endl;
                            cout << endl;
                        } else {
                            cout << "Enter a value to push onto the stack: ";
                            cin >> integerValue;
                            userStack.Push( integerValue );
                        }
                    break;

                case ReverseStack: userStack.ReversePrint();
                    break;

                case Roll: userStack.Roll();
                    break;

                case Max:
                        if ( userStack.Empty() ) {
                                cout << "The stack is empty, there is no max value." << endl;
                                cout << endl;
                        } else {
                            userStack.Max(maxValue);
                            cout << "Max value of the stack: " << maxValue << endl;
                            cout << endl;
                        }
                    break;

                case Min:
                        if ( userStack.Empty() ) {
                            cout << "The stack is empty, there is no min value." << endl;
                            cout << endl;
                        } else {
                            userStack.Min(minValue);
                            cout << "Min value of the stack: " << minValue << endl;
                            cout << endl;
                        }
                    break;

                case Sum:
                    if ( userStack.Empty() ) {
                            cout << "The stack is empty, cannot find the sum." << endl;
                            cout << endl;
                        } else {
                            userStack.Sum(stackSum);
                            cout << "sum of the stack: " << stackSum << endl;
                            cout << endl;
                        }
                    break;

                default: 
                    cout << "Invalid Selection." << endl;
                    cout << "Print member-function invoked." << endl;
                    userStack.Print();
            } // switch
            // ===================

        } // if

    } // Method ProcessCommand()
    // ==========================

// ===========================
// End Member-Functions
// ===========================
