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
        UserStack intStack;
        // ===============

        // ================================
        do {
            
            menu.Display();
            menu.QueryUser();
            menu.ProcessCommand( intStack );

        } while ( menu.Continue() );
        // ================================

        return 0;
        // ================================
        
    }


















































