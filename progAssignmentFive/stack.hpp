// ============
#pragma once
// ============

// ============
    class UserStack
    {
        // ===========
        // Constants:
        // ============================================
        // MAX_STACK_SIZE is a static constant. That is MAX_STACK_SIZE is
        // constant that exists for as long as the program executes.
        // ============================================
        const static int MAX_STACK_SIZE = 100;
        // ============================================

        public:

            // =============
            // Constructors
            // =============
            UserStack(void);
            // =============
            
            // =============
            // Destructors
            // =============
            ~UserStack();
            // =============

            // ===============
            // Member-Functions

            // NOTES:
            // ===============
            void Destroy();
            void Initialize();
            void Pop(double&);
            void Print();
            void Push(double);
            bool Empty();
            bool Full();
            
            // ==============================

            private:

                // ================
                // Member-Variables
                // ================
                DoublyLinkedList elements;
                // ===========================

    }; // Class Stack
    // ===========================





































