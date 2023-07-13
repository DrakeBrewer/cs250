// ===========================================================================
// main.cpp : Defines an entry point for the console for the quizOne directory
// ===========================================================================

// ======================
// inclusions
// ======================
#include "includes.hpp"

// ======================

// ======================
    int main () {

        // ================================
        // Variable and Object Declarations
        // ================================
        Menu menu;
        SinglyLinkedList listA;
        // ===============

        // ================================
        do {
            
            menu.Display();
            menu.QueryUser();
            menu.ProcessCommand( listA );

        } while ( menu.Continue() );
        // ================================

        return 0;
        // ================================
        
    }


















































