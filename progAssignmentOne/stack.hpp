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
            ~UserStack(void);
            // =============

            // ===============
            // Member-Functions

            // NOTES:
            // ===============
            void Initialize();
            void Min(int&);
            void Max(int&);
            void Pop(int&);
            void DoublePop(int&, int&);
            void Print();
            void Purge();
            void Push(int);
            void DoublePush(int, int);
            void ReversePrint();
            void Roll(); 
            bool Empty();
            bool Full();
            void Sum(int&);
            // ==============================

            private:

                // ================
                // Member-Variables
                // ================
                int top;
                int elements[MAX_STACK_SIZE];
                // ===========================

    }; // Class Stack
    // ===========================





































