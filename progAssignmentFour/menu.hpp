// ================
#pragma once
// ================

// ===========================
// Class and Header File Inclusions
// ===========================
#include "includes.hpp"
#include "types.hpp"
// ===========================


// ===========================
class Menu {

    public:

        // ============
        // Constructors
        // ============
        Menu(void);
        // ============

        // ============
        // Deconstructor
        // ============
        ~Menu(void);
        // ============


        // ==========================
        // Member-Function Prototypes
        // ==========================

        // ==========================
        MenuChoices Get();
        void Set(MenuChoices);
        void Display();
        void QueryUser();
        bool Continue();
        void ProcessCommand( DoublyLinkedList& );
        // ==========================

        private:

            // ==========================
            // Member-Variables

            // NOTES:
            // ==========================
            MenuChoices userMenuSelection;
            // ==========================

    }; // Class Menu
