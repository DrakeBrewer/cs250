// ======================
#include "includes.hpp"
// ============

// ============
// Constructors
// ============

    // ============================
    // Default Constructor Number()
    // ============================
    Number::Number(void) {
        cout << "Default constructor invoked: Number(void)." << endl;
        number = 0;
    } // Constructor Number
    // ============================

    // ============================
    // Non-Default Constructor Number()
    // ============================
    Number::Number (int integerValue) {
        cout << "Non-Default constructor invoked: Number(int)." << endl;
        number = integerValue;
    } // Constructor Number()
    // ============================

    // ============================
    // End Constructors
    // ============================

    // ============================
    // Destructor ~Number()

    // NOTES:
    // 1) The Number ptogram does not dynamically alocate space in the freestore.
    //      Thus, the destructor does not need ot deallocate memory.
    // =============================================================
    Number::~Number(void) {

        cout << "Destructor ~Number invoked." << endl;

    } // Destructor ~Number()
// ==============
// End Destructor
// ==============


// ================
// Member-Functions
// ================

    // =============================
    // Accessor Function Get()
    // =============================
    int Number::Get() {

        return number;

    } // Accessor Function Get()
    // ==========================================================


    // =============================
    // Mutator Function Set()
    // =============================
    void Number::Set(int integerValue) {

        number = integerValue;
    } // Mutator Function Set()
    // ==========================================================

    // =============================
    // Member-Fucntion Output()
    // =============================
    void Number::Output() {

        cout << number << endl;
        cout << endl;

    } // Member-Function Output()
    // ==========================================================

    // =============================
    // Member-Function Add( Number, Number )
    // =============================
    void Number::Add(Number otherNumberA, Number otherNumberB) {

        number = otherNumberA.Get() + otherNumberB.Get();

    } // Member-Function Add( Number, Number )
    // ==========================================================

    // =============================
    // Member-Function Subtract( Number, Number )
    // =============================
    void Number::Subtract(Number otherNumberA, Number otherNumberB) {

        number = otherNumberA.Get() - otherNumberB.Get();

    } // Member-Function Subtract( Number, Number )
    // ==========================================================

    // =============================
    // Member-Function Multiply( Number, Number )
    // =============================
    void Number::Multiply(Number otherNumberA, Number otherNumberB) {

        number = otherNumberA.Get() * otherNumberB.Get();

    } // Member-Function Multiply( Number, Number )
    // ==========================================================

    // =============================
    // Member-Function Divide( Number, Number )
    // =============================
    void Number::Divide(Number otherNumberA, Number otherNumberB) {

        number = otherNumberA.Get() / otherNumberB.Get();

    } // Member-Function Divide( Number, Number )
    // ==========================================================

    // =============================
    // Member-Function DoubleMultiply( Number, Number )
    // =============================
    void Number::DoubleMultiply(Number otherNumberA, Number otherNumberB) {

        number = (otherNumberA.Get() * otherNumberB.Get()) + (otherNumberA.Get() * otherNumberB.Get());

    } // Member-Function DoubleMultiply( Number, Number )
    // ==========================================================


// ===========================
// End Member-Functions
// ===========================