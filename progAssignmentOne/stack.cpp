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
        
        cout << "Constructor UserStack( void ) invoked." << endl;

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
    // Member-Function DoublePop()
    // =========================
    void UserStack::DoublePop( int& poppedValueA, int& poppedValueB ) {
        if (top < 3) {
            cout << "cannot perform a double pop." << endl << endl;

        } else {
            Pop(poppedValueA);
            Pop(poppedValueB);
        }
        
    } // Member-Function DoublePop()
    // ==================================================

    // =========================
    // Member-Function DoublePush()
    // =========================
    void UserStack::DoublePush( int pushedValueA, int pushedValueB ) {
        if (top > 99)
        {
            cout << "cannot perform a double push." << endl << endl;
        } else {
            Push(pushedValueA);
            Push(pushedValueB);
        }

    } // Member-Function DoublePush()
    // ==================================================

    // =========================
    // Member-Function Empty()
    // =========================
    bool UserStack::Empty() {
        
        return (top == 0);
        
    } // Member-Function Empty()
    // ==================================================

    // =========================
    // Member-Function Full()
    // =========================
    bool UserStack::Full() {
        
        return (top == MAX_STACK_SIZE);

    } // Member-Function Full()
    // ==================================================

    // =========================
    // Member-Function Initialize()
    // =========================
    void UserStack::Initialize() {

        top = 0;

    } // Member-Function Initialize()
    // ==================================================

    // =========================
    // Member-Function Max()
    // =========================
    void UserStack::Max( int& maxValue ) {

        maxValue = elements[top-1];

    } // Member-Function Max()
    // ==================================================

    // =========================
    // Member-Function Min()
    // =========================
    void UserStack::Min( int& minValue ) {

        minValue = elements[0];

    } // Member-Function Min()
    // ==================================================

    // =========================
    // Member-Function Pop()
    // =========================
    void UserStack::Pop( int& poppedValue) {
        
        top--;
        poppedValue = elements[top];

    } // Member-Function Pop()
    // ==================================================

    // =========================
    // Member-Function Print()
    // =========================
    void UserStack::Print() {

        cout << "Stack Top" << endl;

        if (top == 0) {
            cout << "The Stack is empty." << endl;
        } else {
            for (int ii = top - 1; ii >= 0; ii-- ) {
                cout << "elements[" << ii << "] = " << elements[ii] << endl;
            }
        }

        cout << "Stack Bottom" << endl << endl;

        

    } // Member-Function Print()
    // ==================================================

    // =========================
    // Member-Function Push()
    // =========================
    void UserStack::Push( int pushedValue ) {
        
        elements[top] = pushedValue;
        top++;
        
    } // Member-Function Push()
    // ==================================================

    // =========================
    // Member-Function Purge()

    // NOTES:
    // =========================
    void UserStack::Purge() {
        for (int ii = 0; ii < MAX_STACK_SIZE; ii++) {
            elements[ii] = 0;
        } // for

        top = 0;
    } // Member-Function Purge()
    // ==================================================

    // =========================
    // Member-Function ReversePrint()
    // =========================
    void UserStack::ReversePrint() {

        cout << "Stack Bottom" << endl;

        if (Empty()) {
            cout << "The Stack is empty." << endl;
        } else {
            for (int ii = top - top; ii < top; ii++ ) {
                cout << "elements[" << ii << "] = " << elements[ii] << endl;
            }
        }

        cout << "Stack Top" << endl << endl;
        
    } // Member-Function ReversePrint()
    // ==================================================

    // =========================
    // Member-Function Roll()
    // =========================
    void UserStack::Roll() {

        if (top < 2) {
            cout << "Not enough items to perform a roll." << endl << endl;
        } else {
            int hold = elements[top-1];
            elements[top-1] = elements[top-2];
            elements[top-2] = hold;
            cout << "Rolled elements[" << top-1 << "] and elements[" << top-2 << "]" << endl << endl;
        }
        
    } // Member-Function Roll()
    // ==================================================

    // =========================
    // Member-Function Sum()
    // =========================
    void UserStack::Sum( int& sumValue) {

        sumValue = elements[0];

        if (top > 1) {
            for (int ii = 1; ii < top; ii++) {
                
                sumValue += elements[ii];
                
            }
        }
        
    } // Member-Function Sum()
    // ==================================================

// ====================
// End Member-Functions
// ====================