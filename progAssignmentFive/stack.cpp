// ====================
#include "includes.hpp"
// ====================


// ====================
// Constructors
// ====================

    // ========================================
    // Default Constructor UserStack

    // ========================================
    UserStack::UserStack(void) {

        // elements.initializeList();
        
        cout << "Constructor UserStack( void ) invoked." << endl;

        // for (int ii = 0; ii < MAX_STACK_SIZE; ii++) {
        //     elements[ii] = 0;
        // }

    } // Constructor UserStack
    // ===================

// ===================
// End Constructors
// ===================
    
    // ===================
    // Destructor ~UserStack
    // ======================================
    UserStack::~UserStack(void) {

        cout << "Destructor ~UserStack(void) invoked." << endl;

    } // Destructor ~UserStack
    // ===================

// ===================
// Member-Functions
// ===================

    // =========================
    // Member-Function Destroy()

    // NOTES:
    // =========================
    void UserStack::Destroy() {
        // for (int ii = 0; ii < MAX_STACK_SIZE; ii++) {
        //     elements[ii] = 0;
        // }

        // top = 0;

        elements.destroyList();
        
    } // Member-Function Destroy()
    // ==================================================

    // =========================
    // Member-Function Empty()
    // =========================
    bool UserStack::Empty() {
        
        return (elements.isEmpty());
        
    } // Member-Function Empty()
    // ==================================================

    // =========================
    // Member-Function Full()
    // =========================
    bool UserStack::Full() {
        if (elements.length() == MAX_STACK_SIZE) {
            return true;
        } else {
            return false;
        }

    } // Member-Function Full()
    // ==================================================

    // =========================
    // Member-Function Initialize()
    // =========================
    void UserStack::Initialize() {

        elements.initializeList();

    } // Member-Function Initialize()
    // ==================================================

    // =========================
    // Member-Function Pop()
    // =========================
    void UserStack::Pop( double& poppedValue) {
        
        // top--;
        // poppedValue = elements[top];
        elements.deleteLast();

    } // Member-Function Pop()
    // ==================================================

    // =========================
    // Member-Function Print()
    // =========================
    void UserStack::Print() {

        cout << "Stack Top" << endl;

        // if (top == 0) {
        //     cout << "The Stack is empty." << endl;
        // } else {
        //     for (int ii = top - 1; ii >= 0; ii-- ) {
        //         cout << "elements[" << ii << "] = " << elements[ii] << endl;
        //     }
        // }
        if (elements.isEmpty()) {
            cout << "The Stack is empty." << endl;
        } else {
            elements.print();
        }

        cout << "Stack Bottom" << endl << endl;

        

    } // Member-Function Print()
    // ==================================================

    // =========================
    // Member-Function Push()
    // =========================
    void UserStack::Push( double pushedValue ) {
        
        // elements[top] = pushedValue;
        // top++;

        elements.insertFirst(pushedValue);
        
    } // Member-Function Push()
    // ==================================================

// ====================
// End Member-Functions
// ====================