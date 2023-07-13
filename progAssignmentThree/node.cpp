// ====================
#include "includes.hpp"
// ====================


// ====================
// Constructors
// ====================

    // ========================================
    // Node(Default) Constructor

    // ========================================
    Node::Node(void) {
        
        constructorBanner();

        datum = 0;
        next = nullptr;

    } // Constructor
    // ===================
    // ========================================
    // Node Constructor

    // ========================================
    Node::Node(int listElement, Node* nodeptr) {
        
        constructorBanner();

        datum = listElement;
        next = nodeptr;

    } // Constructor
    // ===================

// ===================
// End Constructors
// ===================
    
    // ===================
    // 
    // 
    // 
    // 
    // ======================================
    Node::~Node(void) {

        destructorBanner();

    } // Destructor
    // ===================
    
    // ===================
    // Member-Function Constructor Banner
    // ======================================
    void Node::constructorBanner() {

        cout << "=========================" << endl;
        cout << "Constructor Node invoked." << endl;
        cout << "=========================" << endl;
        cout << endl;

    } // Member-Function Constructor Banner
    // ======================================
    
    // ===================
    // Member-Function Destructor Banner
    // ======================================
    void Node::destructorBanner() {

        cout << "=========================" << endl;
        cout << "Destructor ~Node invoked." << endl;
        cout << "=========================" << endl;
        cout << endl;

    } // Member-Function Destructor Banner
    // ======================================

// ===================
// Member-Functions
// ===================

// ====================
// End Member-Functions
// ====================