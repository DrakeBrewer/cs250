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
        prev = nullptr;

    } // Constructor
    // ===================
    // ========================================
    // Node Constructor

    // ========================================
    Node::Node(int listElement, Node* prevNodeptr, Node* nextNodeptr) {
        
        constructorBanner();

        datum = listElement;
        next = nextNodeptr;
        prev = prevNodeptr;

    } // Constructor
    // ===================

// ===================
// End Constructors
// ===================

// ===================
// Member-Functions
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
// End Member-Functions
// ===================