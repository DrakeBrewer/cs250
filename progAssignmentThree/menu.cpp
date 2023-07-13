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

        cout << "===================================== " << endl;
        cout << " 1: Quit              2: DestroyList  " << endl;
        cout << " 3: InitializeList    4: InsertFirst  " << endl;
        cout << " 5: InsertLast        6: Insert       " << endl;
        cout << " 7: Print             8: ReversePrint " << endl;
        cout << " 9: DeleteFirst      10: DeleteLast   " << endl;
        cout << "11: Delete                            " << endl;
        cout << "===================================== " << endl;

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

            case 2: userMenuSelection = DestroyList;
                break;

            case 3: userMenuSelection = InitializeList;
                break;

            case 4: userMenuSelection = InsertFirst;
                break;

            case 5: userMenuSelection = InsertLast;
                break;

            case 6: userMenuSelection = Insert;
                break;

            case 7: userMenuSelection = Print;
                break;

            case 8: userMenuSelection = ReversePrint;
                break;

            case 9: userMenuSelection = DeleteFirst;
                break;

            case 10: userMenuSelection = DeleteLast;
                break;

            case 11: userMenuSelection = Delete;
                break;

            default: userMenuSelection = ReversePrint;
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
    void Menu::ProcessCommand( SinglyLinkedList& list) {

        // ===============================
        // Variable and Object Declarations
        // ===============================
        int location, integerValue;
        // ===============================
        

        if ( userMenuSelection != Quit ) {

            switch (userMenuSelection) {

                case DestroyList: list.destroyList();
                    break;

                case InitializeList: list.initializeList();
                    break;

                case InsertFirst:
                    cout << "Enter a value to add to the beginning of the list. " << endl;
                    cin >> integerValue;
                    list.insertFirst(integerValue);
                    break;

                case InsertLast:
                    cout << "Enter a value to add to the end of the list. " << endl;
                    cin >> integerValue;
                    list.insertLast(integerValue);
                    break; 
                
                case Insert:
                    cout << "Enter a value to insert into the list. " << endl;
                    cin >> integerValue;
                    cout << "Enter a node location for insertion." << endl;
                    cin >> location;
                    list.insert(integerValue, location);
                    break; 

                case Print: list.print();
                    break;

                case ReversePrint: list.reversePrint( list.getFirst() );
                    break;

                case DeleteFirst: list.deleteFirst();
                    break;

                case DeleteLast: list.deleteLast();
                    break;

                case Delete:
                    cout << "Enter a node location for deletion." << endl;
                    cin >> location;
                    list.Delete( location );
                    break;

                default: 
                    cout << "Invalid Selection." << endl;
                    cout << "Print member-function invoked." << endl;
                    list.print();
                    break;
            } // switch
            // ===================

        } // if

    } // Method ProcessCommand()
    // ==========================

// ===========================
// End Member-Functions
// ===========================
